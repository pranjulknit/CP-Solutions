// Problem: B. Maximum Cost Deletion
// Contest: Codeforces - Educational Codeforces Round 111 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1550/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n,a,b;
  cin>>n>>a>>b;
  
  string s;
  cin>>s;
  
  
  
  ll ans = a*n;
  
  if(b>0){
   ans += b*n;
  }
  else{
   ll group = 0;
   
   for(ll i=1;i<n;i++){
    if(s[i]!=s[i-1]){
     group++;
    }
   }
   group++;
   ll total_group = group/2 + 1;
   
   ans += b*total_group;
   
   
  }
  cout<<ans<<endl;
 }
 }