// Problem: B. Absent Remainder
// Contest: Codeforces - Educational Codeforces Round 118 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1613/B
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
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  sort(v.begin(),v.end());
  ll k = n/2 + bool(n&1);
  for(ll i=n-1;i>=k;i--){
   cout<<v[i]<<" "<<v[0]<<endl;
  }
  
  //cout<<endl;
 }
 return 0;}