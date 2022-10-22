#include<iostream>
using namespace std;
int firstoccurence(int arr[],int key,int n,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
   return firstoccurence(arr,key,n,i+1);
}
int lastoccurence(int arr[],int key,int n,int i){
    if(i==n){
        return -1;
    }
    int r=lastoccurence(arr,key,n,i+1);
    if(r!=-1){
        return r;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
   int arr[]={1,2,3,4,3,2};
  cout<< firstoccurence(arr,2,6,0);
   cout<< lastoccurence(arr,2,6,0);


}
