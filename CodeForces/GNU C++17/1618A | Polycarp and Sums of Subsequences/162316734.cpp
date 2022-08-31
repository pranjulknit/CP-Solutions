// Problem: A. Polycarp and Sums of Subsequences
// Contest: Codeforces - Codeforces Round #760 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1618/A
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
  vector<ll> v;
  
  for(ll i=0;i<7;i++){
   ll insrt;
   cin>>insrt;
   
   v.push_back(insrt);
  }
  
  sort(v.begin(),v.end());
  
  cout<<v[0]<<" "<<v[1]<<" "<<v[6]-v[0]-v[1]<<"\n";
 }
 return 0;
}