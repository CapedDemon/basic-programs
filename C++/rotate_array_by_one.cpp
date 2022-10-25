#include<iostream>
using namespace std;
void rotate(int a[], int n){
    int j=a[n-1];
    for(int i=n; i>0; i--){
        a[i]=a[i-1];
    }
    a[0]=j;
}

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[20];
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    rotate(a, n);
    print(a, n);
    return 0;
}