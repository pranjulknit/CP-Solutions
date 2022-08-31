// Problem: B. Triangles on a Rectangle
// Contest: Codeforces - Educational Codeforces Round 119 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1620/B
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
 
int solve(string &s,ll n){
 
 if(n==0 || n==1){
  return 0;
 }
    
 
   // cout<<n<<endl;
 if(s[n-1]=='1' && s[n-2]=='1'){
         return 1+solve(s,n-1);
 }
 else{
  return solve(s,n-1);
 }
 
}
 
int main(){
 
 
 ll t;
 cin>>t;
 
 while(t--){
  ll w,h;
  cin>>w>>h;
  
  
  ll x;
  cin>>x;
  
  vector<ll> v;
  
  for(ll i=0;i<x;i++){
   ll insrt;
   cin>>insrt;
   v.push_back(insrt);
  }
  
  ll far1= v[x-1]-v[0];
  
  v.clear();
  cin>>x;
  
  
  for(ll i=0;i<x;i++){
   ll insrt;
   cin>>insrt;
   v.push_back(insrt);
  }
  
  ll far2 = v[x-1]-v[0];
  v.clear();
  cin>>x;
  
  
  for(ll i=0;i<x;i++){
   ll insrt;
   cin>>insrt;
   v.push_back(insrt);
  }
  
  ll far3= v[x-1]-v[0];
  
  v.clear();
  cin>>x;
  
  
  for(ll i=0;i<x;i++){
   ll insrt;
   cin>>insrt;
   v.push_back(insrt);
  }
  
  ll far4= v[x-1]-v[0];
  
  ll area1 = max(far1,far2)*h;
  
  ll area2 = max(far3,far4)*w;
  
  cout<<max(area1,area2)<<endl;
  
 }
 }