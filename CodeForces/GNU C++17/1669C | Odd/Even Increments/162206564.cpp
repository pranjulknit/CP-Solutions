// Problem: C. Odd/Even Increments
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1669/C
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
  ll a[n+1];
  for(ll i=1;i<n+1;i++){
   cin>>a[i];
  }
  ll cnta=0;
  ll cntb=0;
  ll cntc=0;
  ll cntd=0;
  bool no = false;
  for(ll i=1;i<=n;i++){
   if(i&1){
    if(a[i]&1){
     cnta++;
    }
    else{
     cntb++;
    }
   }
     else {
      if(a[i]&1){
     cntc++;
    }
    else{
     cntd++;
    }
     }
   if((cnta >0 && cntb>0)||(cntc >0 && cntd>0)){
    no = true;
    break;
   }
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