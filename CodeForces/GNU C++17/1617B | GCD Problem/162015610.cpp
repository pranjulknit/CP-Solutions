// Problem: B. GCD Problem
// Contest: Codeforces - Codeforces Round #761 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1617/B
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
  
  for(ll i=2;i<=n;i++){
   if(__gcd(i,n-i-1)==1){
    cout<<i<<" "<<n-i-1<<" ";
    break;
   }
  }
  cout<<1<<"\n";
 }
 
 return 0;
}