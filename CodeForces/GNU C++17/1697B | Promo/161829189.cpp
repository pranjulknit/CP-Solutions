// Problem: B. Promo
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1697/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll n,q;
 cin>>n>>q;
 
 vector<ll> v;
 vector<ll> prefix(n+1,0);
 for(ll i=0;i<n;i++){
  ll insrt;
  cin>>insrt;
  v.push_back(insrt);
  
  
 }
 sort(v.begin(),v.end());
 for(ll i=0;i<n;i++)
    prefix[i+1] += prefix[i]+v[i];  
 
 //sort(prefix.begin(),prefix.end());
 
 // for(int x:prefix){
  // cout<<x<<" ";
 // }
//  
 while(q--){
  ll x,y;
  cin>>x>>y;
  
  cout<<prefix[n-x+y]-prefix[n-x]<<"\n";
  
 }
 return 0;
}