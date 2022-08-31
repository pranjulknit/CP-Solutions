// Problem: B1. Tokitsukaze and Good 01-String (easy version)
// Contest: Codeforces - Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1678/B1
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
  
  string s;
  cin>>s;
  ll cnt = 0;
  for(ll i=0;i<n-1;i+=2){
   if(s[i]!=s[i+1]){
    cnt++;
    
   }
  }
  
  cout<<cnt<<"\n";
 }
 return 0;
}