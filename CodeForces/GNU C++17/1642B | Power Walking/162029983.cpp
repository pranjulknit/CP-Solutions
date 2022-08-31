// Problem: B. Power Walking
// Contest: Codeforces - Codeforces Round #773 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1642/B
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
  
  vector<ll> v(n);
  map<ll,ll>mp;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   mp[v[i]]++;
  }
  ll siz= mp.size();
  for(ll i=0;i<n;i++){
   if(i<siz)
   cout<<siz<<" ";
   else{siz++;
    cout<<siz<<" ";
   }
  }
  
  cout<<"\n";
 }
 return 0;
}