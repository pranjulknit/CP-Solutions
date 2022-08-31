// Problem: A. Number Transformation
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1674/A
// Memory Limit: 512 MB
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
  ll a,b;
  cin>>a>>b;
  
  if(b%a != 0){
   cout<<0<<" "<<0<<"\n";
  }
  else{
   cout<<1<<" "<<b/a<<"\n";
  }
 }
 return 0;
}