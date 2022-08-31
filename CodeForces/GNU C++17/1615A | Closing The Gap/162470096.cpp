// Problem: A. Closing The Gap
// Contest: Codeforces - Codeforces Global Round 18
// URL: https://codeforces.com/problemset/problem/1615/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define all(x) x.begin(),x.end()
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  
  ll sum =0;
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
   sum+=v[i];
  }
  sort(all(v));
  
  if(v[0]==v[n-1]){
   cout<<0<<"\n";
  }
  else if(sum%n == 0){
   cout<<0<<"\n";
  }
  else{
   cout<<1<<"\n";
  }
  
 }
 return 0;
}