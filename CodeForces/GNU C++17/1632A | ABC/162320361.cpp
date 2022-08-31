// Problem: A. ABC
// Contest: Codeforces - Codeforces Round #769 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1632/A
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
  string s;
  cin>>s;
  if(n==1){
   cout<<"YES"<<"\n";
  }
  else if(n==2){
   if(s=="01"||s=="10")
   cout<<"YES"<<"\n";
   else{
    cout<<"NO"<<"\n";
   }
  }
  else{
   cout<<"NO"<<"\n";
  }
 }
 return 0;
}