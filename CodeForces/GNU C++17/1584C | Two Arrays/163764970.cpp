// Problem: C. Two Arrays
// Contest: Codeforces - Technocup 2022 - Elimination Round 2
// URL: https://codeforces.com/problemset/problem/1584/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  vector<ll> a(n),b(n);
  //map<ll,ll> mp;
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  
  for(ll i=0;i<n;i++){
   
   cin>>b[i];
   //if(a[i]!=b[i])
   // mp[b[i]]++;
  }
  
  sort(a.begin(),a.end());
  
  sort(b.begin(),b.end());
  ll i;
  for(i=0;i<n;i++){
   if(a[i]+1 == b[i] or a[i]==b[i]){
    continue;
   }
   else{
    break;
   }
  }
  
  if(i== n){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
  
 }
 return 0;}