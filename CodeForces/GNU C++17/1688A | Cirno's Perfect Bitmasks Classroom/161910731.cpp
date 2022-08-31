// Problem: A. Lex String
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1689/A
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
  if(n==1){
   cout<<3<<"\n";
  }
  else if(__builtin_popcount(n)==1){
   cout<<n+1<<"\n";
  }
  
  else{
   cout<<(n&(-n))<<"\n";
  }
  
  
 }
 return 0;
}