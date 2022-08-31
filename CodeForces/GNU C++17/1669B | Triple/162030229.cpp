// Problem: B. Triple
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1669/B
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
  
  vector<ll> v(n);
  ll ans =-1;
  map<ll,ll>mp;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   
   mp[v[i]]++;
   if(mp[v[i]]>=3){
    ans= v[i];
   }
  }
  
  cout<<ans<<"\n";
 }
 return 0;
}