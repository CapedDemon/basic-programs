// Problem
// Chef is given two strings AA and BB of length NN containing lowercase English letters.

// Chef can rearrange both the strings in any way he wants. He wants to minimize the length of LCS (Longest Common Subsequence) of both the strings.

// Find the minimum length of LCS of AA and BB if he optimally rearranges both the strings.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer NN - denoting the length of AA and BB.
// The second line of each test case contains a string AA.
// The third line of each test case contains a string BB.
// Output Format
// For each test case, output the minimum length of LCS Chef can obtain.

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 1 \leq N \leq 10^51≤N≤10 
// 5
 
// AA and BB contain lowercase English letters
// The sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10 
// 5
//  .
// Sample 1:
// Input
// Output
// 3
// 4
// aaaa
// aaab
// 1
// c
// z
// 5
// abcde
// cdefg
// 3
// 0
// 1
// Explanation:
// Test case 1: \mathrm{LCS}(\texttt{aaaa}, \texttt{aaab}) = \texttt{aaa}LCS(aaaa,aaab)=aaa. It can be shown that no other rearrangement of the strings produces a smaller LCS.

// Test case 3: \mathrm{LCS}(\texttt{acbed}, \texttt{gdefc}) = \texttt{c}LCS(acbed,gdefc)=c. Note that multiple longest common subsequences exist for this arrangement. It can be shown that no other rearrangement of the strings produces a smaller LCS.


#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a;
	    cin>>a;
	    string s1,s2;
	    cin>>s1>>s2;
	    ll hsh[27]={0};
	    ll hsh2[27]={0};
	    ll hsh3[27]={0};
	    for(ll i=0;i<a;i++){
	        hsh[s1[i]-'a'+1]++;
	    }
	    for(ll k=0;k<a;k++){
	        hsh2[s2[k]-'a'+1]++;
	    }
	    for(ll j=0;j<27;j++){
	        hsh3[j]=min(hsh[j],hsh2[j]);
	    }
	    sort(hsh3,hsh3+27);
	    cout<<hsh3[26]<<endl;
	    
	}
	return 0;
}
