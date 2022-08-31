// Problem: B. Circle Game
// Contest: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL: https://codeforces.com/problemset/problem/1695/B
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
  pair<ll,ll> p = {INT_MAX,-1};
  for(ll i=0;i<n;i++){
   cin>>a[i];
   if(a[i]<p.first){
    p.first = a[i];
    p.second = i+1;
   }
  }
  if(n&1){
   cout<<"Mike"<<endl;
  }
  else{
   
   if(p.second &1){
    cout<<"Joe"<<endl;
   }
   else{
    cout<<"Mike"<<endl;
   }
   
  }
  
 }
 return 0;
}