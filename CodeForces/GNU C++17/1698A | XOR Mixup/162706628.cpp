// Problem: A. AvtoBus
// Contest: Codeforces - Codeforces Round #791 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1679/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  ll n;
  cin>>n;
  
  ll a[n];
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  ll ans;
  for(ll i=0;i<n;i++){
   ll x=a[i];
   ll xr = 0;
   for(ll j=0;j<n;j++){
    if(j!=i){
     xr ^=a[j];
    }
   }
   if(xr==x){
    ans = xr;
    break;
   }
  }
  
  cout<<ans<<"\n";
 }
 return 0;
}