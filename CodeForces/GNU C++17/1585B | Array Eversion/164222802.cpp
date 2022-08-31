// Problem: B. Array Eversion
// Contest: Codeforces - Technocup 2022 - Elimination Round 3
// URL: https://codeforces.com/problemset/problem/1585/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  ll mx = -1;
  ll prev = mx;
  ll cnt = -1;
  for(ll i=n-1;i>=0;i--){
   
   mx = max(mx,v[i]);
   if(prev!=mx){
    cnt++;
    prev= mx;
   }
   
  }
  
  cout<<cnt<<endl;
 }
 }