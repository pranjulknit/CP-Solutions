// Problem: B. Anti-Fibonacci Permutation
// Contest: Codeforces - Educational Codeforces Round 123 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1644/B
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
  
  
  for(ll i=1;i<=n;i++){
   cout<<i<<" ";
   
   for(ll j=n;j>=1;j--){
    if(j!=i){
     cout<<j<<" ";
    }
   }
   cout<<endl;
  }
  
 }
 return 0;
}