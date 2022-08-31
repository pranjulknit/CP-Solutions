// Problem: B. Prove Him Wrong
// Contest: Codeforces - Educational Codeforces Round 124 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1651/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define endl "\n";
using namespace std;
 
 
 
 ll apowerb(ll base,ll power){
  if(base==0)
    return 0;
  ll res =1;
  
  while(power>0){
  if(power&1){
   res *= base;
  }
  power>>=1;
  base=base*base;
  }
  
  return res;
 }
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  vector<ll> ans;
  ans.push_back(1);
  bool no = false;
  ll prev = 1;
  for(ll i=1;i<n;i++){
   
   if(prev*3<=1000000000){
    ans.push_back(3*prev);
    prev=3*prev;
   }
   else{
    no = true;
    break;
    
   }
  }
  
  if(no){
   cout<<"NO"<<endl;
   
  }
  else{
   cout<<"YES"<<endl;
   
   for(auto x:ans){
    cout<<x<<" ";
   }
   cout<<endl;
  }
 }
 
 return 0;
}