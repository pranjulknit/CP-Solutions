// Problem: A. Divide and Multiply
// Contest: Codeforces - Deltix Round, Autumn 2021 (open for everyone, rated, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1609/A
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
  ll cnt=1;
  for(ll i=0;i<n;i++){
   while(v[i]%2==0){
    v[i]/=2;
    cnt*=2;
   }
  }
  //cout<<cnt<<endl;
  sort(v.begin(),v.end());
  //cout<<v[n-1]<<endl;
  v[n-1]=cnt*v[n-1];
  //cout<<v[n-1]<<endl;
  ll sum =0;
  
  for(ll i=0;i<n;i++){
   sum +=v[i];
  }
   cout<<sum<<endl; 
 }
 return 0;}