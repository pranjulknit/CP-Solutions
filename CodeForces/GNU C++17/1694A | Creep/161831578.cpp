// Problem: A. Creep
// Contest: Codeforces - Codeforces Round #800 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1694/A
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
  ll a,b;
  cin>>a>>b;
  
  ll com = min(a,b);
 
 for(ll i=0;i<com;i++){
  cout<<"01";
 }
 for(ll i=0;i<a-com;i++){
  cout<<"0";
 }
 
 for(ll i=0;i<b-com;i++){
  cout<<"1";
 }
  cout<<"\n";
 }
 return 0;
}