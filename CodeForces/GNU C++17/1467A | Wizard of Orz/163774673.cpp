// Problem: A. Wizard of Orz
// Contest: Codeforces - Codeforces Round #695 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1467/A
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
  if(n==1){
   cout<<9<<endl;
   continue;
  }
  
  if(n==2){
   cout<<"98"<<endl;
   continue;
  }
  
  cout<<"989";
  
  for(ll i=0;i<n-3;i++){
   cout<<i%10;
   
  }
  cout<<endl;
 }
 return 0;}