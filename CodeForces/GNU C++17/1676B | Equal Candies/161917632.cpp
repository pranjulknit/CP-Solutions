// Problem: B. Equal Candies
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/B
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
  
  ll a[n];
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  
  sort(a,a+n);
  ll sum = 0;
  for(ll i=1;i<n;i++){
   sum += a[i]-a[0];
   
  }
  cout<<sum<<"\n";
 }
 return 0;
}