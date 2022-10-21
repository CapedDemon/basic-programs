package com.manoj;

public class InfinteArray {
    public static void main(String[] args) {
        int[] arr={0,2,3,10,25,32,43,45,65,76};
        int target=10;
        System.out.println(ans(arr,target));
    }

    static int ans(int[] arr, int target){
        int start=0;
        int end=1;

        while (target>arr[end]){
            int newStart=end+1;
            end= end + (end - start + 1) * 2;
            start=newStart;
        }
        return binarySearch(arr, target, start,end) ;
    }

    static int binarySearch(int[] arr,int target,int start,int end){


        while (start<=end){
            int mid=start+(end-start)/2;

            if(target<arr[mid]){
                end=mid-1;
            }else if (target>arr[mid]){
                start=mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
}
