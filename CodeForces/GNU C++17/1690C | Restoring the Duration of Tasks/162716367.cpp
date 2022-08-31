// Problem: C. Restoring the Duration of Tasks
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1690/C
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
  ll n;
  cin>>n;
  
  ll a[n],b[n];
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  for(ll i=0;i<n;i++){
   cin>>b[i];
  }
  
  set<ll>  set;
  for(ll i=0;i<n;i++){
   set.insert(a[i]);
   set.insert(b[i]);
   
   auto it = set.end();
   it--;
   ll last = *it;
   it--;
   ll secondlast= *it;
   cout<<last-secondlast<<" ";
  }
  
  cout<<endl;
 }
 return 0;
}