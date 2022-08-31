// Problem: A. Division?
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1669/A
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
  
  if(n>=1900){
   cout<<"Division 1"<<endl;
  }
  else if(n>=1600){
   cout<<"Division 2"<<endl;
  }
  else if(n>=1400){
   cout<<"Division 3"<<endl;
  }
  else {
   cout<<"Division 4"<<endl;
  }
 }
 return 0;
}