// Problem: A. Plus One on the Subset
// Contest: Codeforces - Codeforces Round #764 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1624/A
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
  ll n;cin>>n;
  set<ll> set;
  ll mx = -1;
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   set.insert(insrt);
   mx= max(mx,insrt);
  }
  auto it = set.end();
  it--;
  cout<<*it - *set.begin()<<"\n";
  
  //cout<<sum<<"\n";
 }
 return 0;
}