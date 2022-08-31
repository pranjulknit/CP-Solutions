// Problem: A. Grass Field
// Contest: Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1701/problem/A
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
  ll a[2][2];
  for(ll i=0;i<2;i++){
   for(ll j=0;j<2;j++){
    cin>>a[i][j];
    
    
   }
  }
  
  if(a[0][0]==a[0][1] && a[0][1]==a[1][0] && a[0][1]==a[1][1] && a[0][0]==0){
   cout<<0<<endl;
  }
  else if(a[0][0]==a[0][1] && a[0][1]==a[1][0] && a[0][1]==a[1][1] && a[0][0]==1){
   cout<<2<<endl;
  }
  else{
   cout<<1<<endl;
  }
 }
 return 0;}