// Problem: A. Parkway Walk
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1697/A
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
  ll n,m;
  cin>>n>>m;
  
  vector<ll> v;
  ll sum =0;
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   
   v.push_back(insrt);
   
   sum+=v[i];
  }
  
  if(m>=sum){
   cout<<0<<"\n";
  }
  else{
   cout<<sum-m<<"\n";
  }
 }
 return 0;
}