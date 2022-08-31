// Problem: A. Game with Cards
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1681/A
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
  
  ll a[n];
  ll mxa = -1;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   mxa = max(mxa,a[i]);
  }
  
  ll m;
  cin>>m;
  
  ll b[m];
  ll mxb=-1;
  
  for(ll i=0;i<m;i++){
   cin>>b[i];
   mxb = max(mxb,b[i]);
  }
  
  if(mxa>mxb){
   cout<<"Alice"<<"\n";
   cout<<"Alice"<<"\n";
  }
  else if(mxa>=mxb){
   cout<<"Alice"<<"\n";
   
   cout<<"Bob"<<"\n";
  }
  else{
   cout<<"Bob"<<"\n";
   cout<<"Bob"<<"\n";
  }
 }
 return 0;
}