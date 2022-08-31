// Problem: A. Download More RAM
// Contest: Codeforces - Codeforces Round #767 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1629/A
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
  ll n,k;
  cin>>n>>k;
  
  vector<ll>v(n);
  map<ll,ll> mp;
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   v[i]=insrt;
   mp[v[i]]=0;
  }
  
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   if(mp.count(v[i])){
    mp[v[i]]+=insrt;
   }
  }
  //sort(v.begin(),v.end());
  
  set<ll>st(v.begin(),v.end());
  ll sum =0;
  for(auto x:st){
   //cout<<v[i]<<" "<<k<<"\n";
   if(x<=k){
    k+=mp[x];
    
   }else{
    break;
   }
  }
  cout<<k<<"\n";
  
 }
 return 0;
}