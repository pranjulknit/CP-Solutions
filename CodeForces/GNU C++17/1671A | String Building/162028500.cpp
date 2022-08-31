// Problem: A. String Building
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1671/A
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
  string s;
  cin>>s;
  ll n = s.size();
  bool no = false;
  ll cnta=0;
  ll cntb=0;
  for(ll i=0;i<n;i++){
   if(s[i]=='a'){
    //cout<<cntb<<"\n";
    if(cntb==1){
     no = true;
     break;
    }
    cnta++;
    
    cntb=0;
   }
   if(s[i]=='b'){
    if(cnta==1){
     no = true;
     break;
    }
    cntb++;
    
    cnta=0;
   }
  }
  
  if(n==1 || cnta==1 || cntb==1){
   no = true;
  }
  
  if(no){
   cout<<"NO"<<"\n";
  }
  else{
   cout<<"YES"<<"\n";
  }
  
 }
 return 0;
}