// Problem: A. Integer Diversity
// Contest: Codeforces - Good Bye 2021: 2022 is NEAR
// URL: https://codeforces.com/problemset/problem/1616/A
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
   //if(a[i]!=0)
   mp[abs(a[i])]++;
  }
  sort(a,a+n);
  
  ll cnt =0;
  if(mp[0]>0){
   cnt++;
  }
  for(auto it:mp){
   if(it.first !=0){
   if(it.second>1){
    cnt+=2;
   }
   else if(it.second>0){
    cnt++;
   }
   }
  }
  
  cout<<cnt<<"\n";
 }
 return 0;
}