// Problem: A. Beat The Odds
// Contest: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1691/A
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
  
  vector<ll> v;
  
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   
   v.push_back(insrt);
  }
  ll cntodd = 0;
  ll cnteve = 0;
  for(ll i=0;i<n;i++){
   if(v[i]%2==1){
    cntodd++;
   }
   else{
    cnteve++;
   }
  }
  //cout<<cntodd<<" "<<cnteve<<"\n";
  cout<<min(cntodd,cnteve)<<"\n";
 }
 return 0;
}