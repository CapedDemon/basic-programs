#!/usr/bin/env python3
  
import message_filters
import cv2
import rospy
from cv_bridge import CvBridge
from std_msgs.msg import String
from sensor_msgs.msg import Image 
from sensor_msgs.msg import CameraInfo
from cv2 import aruco
import numpy as np 
import sys

def callback(rgb_msg, camera_info):

   arucoDict = cv2.aruco.Dictionary_get(cv2.aruco.DICT_4X4_50)

   param_marker = cv2.aruco.DetectorParameters.create()

   bridge= CvBridge()


   frame = CvBridge().imgmsg_to_cv2(rgb_msg, desired_encoding="rgb8")
   cam_matrix = np.array(camera_info.K).reshape([3, 3])
   dist_coef = np.array(camera_info.D)
   # rgb_undist = cv2.undistort(rgb_image, camera_info_K, camera_info_D)

   gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
   marker_corners , marker_IDs, reject = cv2.aruco.detectMarkers(gray,arucoDict,parameters = param_marker)
   if marker_corners:
        rVec,tVec, _ = cv2.aruco.estimatePoseSingleMarkers(marker_corners,5,cam_matrix,dist_coef)
        total_markers = range(0, marker_IDs.size)
        for ids, corners, i in zip(marker_IDs,marker_corners,total_markers):
            cv2.polylines( frame, [corners.astype(np.int32)], True, [255,0,255], 5, cv2.LINE_AA)
            corners = corners.reshape(4,2)
            corners = corners.astype(int)
            top_r = corners[0].ravel()
            point = cv2.drawFrameAxes(frame,cam_matrix,dist_coef,rVec[i],tVec[i],3,2)
            cv2.putText(frame,f"id: {ids[0]} Dist: {round(tVec[i][0][2],2)}",top_r,cv2.FONT_HERSHEY_PLAIN,1.3,(0,255,0),2,cv2.LINE_AA)

   msg = bridge.cv2_to_imgmsg(frame,"bgr8")
   pub.publish(msg)

if __name__ == '__main__':
   rospy.init_node('my_node', anonymous=True)
   image_sub = message_filters.Subscriber('/camera/color/image_raw', Image)
   info_sub = message_filters.Subscriber('/camera/color/camera_info', CameraInfo)
   ts = message_filters.ApproximateTimeSynchronizer([image_sub, info_sub], 10, 0.2)
   ts.registerCallback(callback)

   pub = rospy.Publisher("/detected", Image, queue_size = 1)
   rate = rospy.Rate(10)
   rospy.spin()