// Problem: A. Sorting Parts
// Contest: Codeforces - Codeforces Global Round 19
// URL: https://codeforces.com/problemset/problem/1637/A
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
  
  ll a[n];
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  
  bool decre = false;
  
  for(ll i=0;i<n-1;i++){
   if(a[i+1]<a[i]){
    decre = true;
    break;
   }
  }
  
  if(decre){
   cout<<"YES"<<"\n";
  }
  else{
   cout<<"NO"<<"\n";
  }
  
 }
 //cout<<ans<<"\n";
 return 0;
}