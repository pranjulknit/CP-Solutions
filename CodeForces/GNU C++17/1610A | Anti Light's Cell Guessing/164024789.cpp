// Problem: A. Anti Light's Cell Guessing
// Contest: Codeforces - Codeforces Global Round 17
// URL: https://codeforces.com/problemset/problem/1610/A
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
  ll x,y;
  cin>>x>>y;
  if(x==1 && y==1){
   cout<<0<<endl;
   continue;
  }
  else if(x==1 || y==1){
   cout<<1<<endl;
  }
  else{
   cout<<2<<endl;
  }
  
 }
 return 0;}