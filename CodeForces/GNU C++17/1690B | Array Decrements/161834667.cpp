// Problem: B. Array Decrements
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1690/B
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
  
  vector<ll> a;
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   a.push_back(insrt);
  }
  
  vector<ll> b;
  set<ll> set;
  bool lessele = false;
  ll dif = -1;
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   b.push_back(insrt);
   
   if(a[i]<b[i]){
    lessele = true;
   }
    dif = max(a[i]-b[i],dif); 
   
  }
  
  if(lessele){
   cout<<"NO"<<"\n";
  }
  else{
   for(ll i=0;i<n;i++){
    if(a[i]-dif != b[i] && b[i]!=0){
     lessele = true;
     break;
    }
   }
   if(lessele){
    cout<<"NO"<<"\n";
   }
   else{
    cout<<"YES"<<"\n";
   }
  }
 }
 return 0;
}