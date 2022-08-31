// Problem: B. Mystic Permutation
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1689/B
// Memory Limit: 256 MB
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
  ll n;
  cin>>n;
  
  vector<ll> a(n);
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  
  vector<ll> b=a;
  sort(b.begin(),b.end());
  if(n==1){
   cout<<-1<<"\n";
  }
  else{
  bool minus=false;
  for(ll i=0;i<n-1;i++){
   if(b[i]==b[i+1]){
    minus = true;
    break;
   }
   if(a[i]==b[i]){
    swap(b[i],b[i+1]);
   }
  }
  
  if(minus){
   cout<<-1<<endl;
  }
  else{
  if(b[n-1]==a[n-1]){
   swap(b[n-1],b[n-2]);
  }
  for(auto c:b){
   cout<<c<<" ";
  }
  cout<<endl;
  }
  }
 }
 return 0;
}