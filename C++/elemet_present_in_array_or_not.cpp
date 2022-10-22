#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool b=0;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int a[50];
    int x;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter any number "<<endl;
    cin>>x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            b=1;
            break;
        } 
        else{
            b=0;
        }
    }
    if (b){
        cout<<"It is present "<<endl;
    }
    else{
        cout<<"Not present "<<endl;
    }

return 0;
}