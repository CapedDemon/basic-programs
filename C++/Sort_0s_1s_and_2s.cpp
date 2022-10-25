#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(int);

    int l=0,r=n-1,m=0;
        
        while(m<=r)
        {
            if(a[m]==0)
            {
                swap(a[l],a[m]);
                l++;
                m++;
            }
            else if(a[m]==1) m++;
            else
            {
                swap(a[m],a[r]);
                r--;
            }
	}
	cout<<"Array after sorting is :"<<endl;
	for(int i:a)
		cout<<i<<" ";

    return 0;
}