// Problem: A. Log Chopping
// Contest: Codeforces - Codeforces Global Round 20
// URL: https://codeforces.com/problemset/problem/1672/A
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
  
  vector<ll> v(n);
  //bool allodd = true;
  ll ways = 0;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   ways +=(v[i]-1);
  }
  
  if(ways&1){
   cout<<"errorgorn"<<endl;
  }
  else{
   cout<<"maomao90"<<endl;
  }
 }
 return 0;
}