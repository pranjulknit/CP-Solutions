// Problem: A. Good Pairs
// Contest: Codeforces - CodeTON Round 1 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1656/A
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
  
  vector<pair<ll,ll>> v;
  //map<ll,ll>mp;
  //pair<ll,ll> ans={-1,-1};
  
  // ll mnn=INT_MAX;
  // ll mx = INT_MIN;
  
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;;
   v.push_back({insrt,i+1});
    
  }
  
  sort(v.begin(),v.end());
  
  cout<<v[0].second<<" "<<v[n-1].second<<"\n";
  
 }
 return 0;
}