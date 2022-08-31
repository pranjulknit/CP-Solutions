// Problem: A. Equal or Not Equal
// Contest: Codeforces - Educational Codeforces Round 119 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1620/A
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
  string s;
  cin>>s;
  
  ll siz = s.size();
  ll cntN=0;
 for(ll i=0;i<siz;i++){
  if(s[i]=='N'){
   cntN++;
  }
 }
 if(cntN==1){
  cout<<"NO"<<"\n";
 }
 else{
  cout<<"YES"<<"\n";
 }
 }
 return 0;
}