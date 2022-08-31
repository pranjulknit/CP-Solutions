// Problem: A. The Third Three Number Problem
// Contest: Codeforces - Codeforces Round #804 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1699/A
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
  if(n<2 || n&1){
   cout<<-1<<endl;
  }
  else{
   
   cout<<0<<" "<<(n/2)<<" "<<0<<endl;
  }
  //cout<<(1^3)<<" "<<(3^1)<<(1^1)<<" "<<endl;
  //cout<<a<<" "<<b<<" "<<c<<endl;
 }
 return 0;
}