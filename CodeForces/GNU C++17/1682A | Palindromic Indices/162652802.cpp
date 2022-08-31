// Problem: A. Palindromic Indices
// Contest: Codeforces - Codeforces Round #793 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1682/A
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
  
  ll cnt =0;
  
  
  for(ll i=n/2;i<n;i++){
   if(s[i]==s[n/2]){
    cnt++;
   }
   else{
    break;
   }
  }
  if(n&1)
  cout<<2*cnt-1<<"\n";
  else{
   cout<<2*cnt<<"\n";
  }
 }
 return 0;
}