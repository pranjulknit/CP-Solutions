// Problem: B. Roof Construction
// Contest: Codeforces - Codeforces Round #769 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1632/B
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
  ll i=1;
  while((1<<i)<n){
   i++;
  }
  i--;
  ll number =(1<<i);
  
  for(ll k=number-1;k>=0;k--){
   cout<<k<<" ";
  }
  
  for(ll k=number;k<n;k++){
   cout<<k<<" ";
  }
  cout<<endl;
 }
 return 0;}