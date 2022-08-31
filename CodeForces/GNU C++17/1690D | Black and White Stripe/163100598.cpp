// Problem: D. Black and White Stripe
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1690/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n,k;
  cin>>n>>k;
  
      string s;
      cin>>s;
      
      ll prefix[n+1]={0};
      
      for(ll i=0;i<n;i++){
       if(s[i]=='W'){
        prefix[i+1] = prefix[i]+1;
       }
       else{
        prefix[i+1] = prefix[i];
       }
      }
      
      // for(auto x:prefix){
       // cout<<x<<endl;
      // }
      
      
      ll ans = INT_MAX;
      
      for(ll i=k;i<=n;i++){
       ans = min(ans,prefix[i]-prefix[i-k]);
      }
      
      cout<<ans<<endl;
 }
 return 0;
}