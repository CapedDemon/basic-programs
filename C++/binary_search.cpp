#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int l=0,r=n-1,flag=0;
	
	while(l<=r)
	{
		int m=l+(r-l)/2;
		if(arr[m]==x)
		{	
			cout<<"Element Found at index : "<<m<<endl;
			flag=1;
		}
		else if(arr[m]>x)
			r=m-1;
		else
			l=m+1;
	}
	
	if(!flag)
		cout<<"The element does not exist"<<endl;
}
