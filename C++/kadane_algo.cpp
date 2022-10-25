#include<bits/stdc++.h>
using namespace std ;

int main(){


	int t ;
	cin >> t ;

	while(t--){
		int n ;
		cin >> n ;
		vector<int> v(n) ;
		for(int i=0;i<n;i++){
			cin >> v[i] ;
		}
		int ans= INT_MIN ;
		int curr = 0 ;

		for(int i=0;i<n;i++){
			curr+=v[i] ;
			ans= max(ans, curr) ;
			if(curr<0) curr= 0 ;
		}

		cout<<ans<<endl ;
	}

	return 0 ;

}