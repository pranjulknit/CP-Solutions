// Problem: A. Square String?
// Contest: Codeforces - Codeforces Round #762 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1619/A
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
  string s;
  
  cin>>s;
  
  ll n  = s.size();
  
  if(n&1){
   cout<<"NO"<<"\n";
  }
  else{
   bool no = false;
      for(ll i=0;i<n/2;i++){
       if(s[i]!=s[i+n/2]){
        no = true;
       }
      }
      
      if(no){
       cout<<"NO"<<"\n";
      }
      else{
       cout<<"YES"<<"\n";
      }
  }
 }
 return 0;
}