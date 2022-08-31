// Problem: A. Tokitsukaze and All Zero Sequence
// Contest: Codeforces - Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1678/A
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
  map<ll,ll>mp;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   if(a[i]!=0)
   mp[a[i]]++;
  }
  if(mp.size()==n){
   cout<<n+1<<"\n";
  }
  else{
   ll cnt = 0;
   for(auto it:mp){
    cnt += it.second;
   }
   
   cout<<cnt<<"\n";
  }
  
 }
 
 return 0;
}