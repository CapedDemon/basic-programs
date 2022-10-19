#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = { 4, 3, 7, 8, 6, 2, 1 };
    int n = 7;
    
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
	if(!flag and arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
	else if( flag and arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
	        
	flag=!flag;
    }
    cout<<"Array after converting : ";

    for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
    return 0;
}