// Problem: A. Min Max Swap
// Contest: Codeforces - Codeforces Round #768 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1631/A
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
  vector<ll> p(n),q(n);
  
  for(ll i=0;i<n;i++){
   cin>>p[i];
  }
  
  for(ll i=0;i<n;i++){
   cin>>q[i];
  }
  
  for(ll i=0;i<n;i++){
   if(p[i]<q[i]){
    swap(p[i],q[i]);
   }
  }
  
  sort(p.begin(),p.end());
  sort(q.begin(),q.end());
  
  cout<<p[n-1]*q[n-1]<<"\n";
  
 }
 return 0;
}