// Problem: A. Ancient Civilization
// Contest: Codeforces - Codeforces Round #765 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1625/A
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
  ll n,k;
  cin>>n>>k;
  
 vector<ll> v(n);
 ll mx=0;
 ll num = 0;
 for(ll i=0;i<n;i++){
  cin>>v[i];
  
  
 }
 
  for(ll i=0;i<=31;i++){
   ll cntone = 0;
   ll cntzero = 0;
   ll mask = (1<<i);
   for(ll j=0;j<n;j++){
    if(mask&v[j]){
     cntone++;
    }
    else{
     cntzero++;
    }
   }
   if(cntzero>=cntone){
    num = (num|0);
   }
   else{
    num = (num|(1<<i));
   }
  }
 cout<<num<<"\n";
 }
 return 0;
}