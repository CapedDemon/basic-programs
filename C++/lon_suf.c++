#include "bits/stdc++.h"
using namespace std;
int suffix(string s1,string s2)
{
    string ss,m;
    string arr[45];
    int ln1,ln2,i,k;
    i = 0;
    ln1 = s1.length() - 1;
    ln2 = s2.length() - 1;
    while(ln1>-1 && ln2>-1)
    {
        if(s1[ln1] == s2[ln2])
        {
            arr[i] = s1[ln1];
            ln1 = ln1-1;
            ln2 = ln2 - 1;
            i = i+1;
        }
        else
        {
            ln1 = -1;
        }
    }
    if(i==0)
    {
        cout<<"no common suffix";
    }
    else
    {
        for(k=i-1;k>=0;k--)
        {
            cout<<arr[k]<<"";
        }
    }
    return 0;
}
int main()
{
    string s1,s2;
    cout<<"enter string 1: ";
    cin>>s1;
    cout<<"enter string 2: ";
    cin>>s2;
    suffix(s1,s2);
    return 0;
}
