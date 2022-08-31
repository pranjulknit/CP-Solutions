// Problem: B. Squares and Cubes
// Contest: Codeforces - Codeforces Round #762 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1619/B
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
  
  cout<<(ll)cbrt(n)+(ll)sqrt(n) - (ll)(sqrt(cbrt(n)))<<"\n";
 }
 
 
 return 0;
}