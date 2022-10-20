package com.manoj;

public class MountainArr {
    public static void main(String[] args) {
        int[] arr={1,3,4,6,8,5,2};
        int ans=peakIndexInMountainArray(arr);
        System.out.println(ans);
    }

    public static int peakIndexInMountainArray(int[] arr) {
        int start=0;
        int end=arr.length-1;

        while(start<end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] > arr[mid + 1]) {
                end = mid;
            } else  {
                start = mid + 1;
            }
        }
    return start;
    }
}