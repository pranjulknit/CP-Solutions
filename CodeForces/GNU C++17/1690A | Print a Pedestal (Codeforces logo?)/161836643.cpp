// Problem: A. Print a Pedestal (Codeforces logo?)
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1690/A
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
  //ll ans = n/3;
  
  if(n%3==1){
   cout<<n/3<<" "<<n/3 +2<<" "<<n/3 -1<<"\n";
  }
  else if(n%3==2){
   cout<<n/3+1<<" "<<n/3 +2<<" "<<n/3 -1<<"\n";
  }
  else{
   cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<"\n";
  }
 }
 return 0;
}