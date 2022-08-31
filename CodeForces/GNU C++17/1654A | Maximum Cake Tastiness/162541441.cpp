// Problem: A. Maximum Cake Tastiness
// Contest: Codeforces - Codeforces Round #778 (Div. 1 + Div. 2, based on Technocup 2022 Final Round)
// URL: https://codeforces.com/problemset/problem/1654/A
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
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  sort(v.begin(),v.end());
  ll sum =0;
  ll mx = -1;
  for(ll i=0;i<n-1;i++){
   mx = max(mx,v[i]+v[i+1]);
  }
  
  cout<<mx<<"\n";
 }
 return 0;
}