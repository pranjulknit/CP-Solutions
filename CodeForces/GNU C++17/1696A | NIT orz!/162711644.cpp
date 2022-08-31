// Problem: A. NIT orz!
// Contest: Codeforces - Codeforces Global Round 21
// URL: https://codeforces.com/problemset/problem/1696/A
// Memory Limit: 512 MB
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
  
  ll n,k;
  cin>>n>>k;
  
  ll a[n];
      ll mx = -1;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   mx = max(mx,(a[i]|k));
  }
  
  cout<<mx<<endl;
 }
 return 0;
}