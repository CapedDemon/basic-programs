package AdvJava;

import java.util.Arrays;

public class ReverseArray {
    static void reverseArray(int[] arr) {
        for(int i=0;i<arr.length/2;i++) {
            swap(i,arr.length-i-1, arr);
        }
        Arrays.stream(arr).forEach(e -> System.out.print(e + " "));
    }

    static void swap(int i, int j, int[] arr){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    public static void main(String[] args) {
        reverseArray(new int[]{1,2,3,4,5});
    }
}
