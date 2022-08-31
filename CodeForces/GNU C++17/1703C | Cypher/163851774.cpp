// Problem: C. Cypher
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/C
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
  
  vector<ll> ans(n);
  
  for(ll i=0;i<n;i++){
   cin>>ans[i];
  }
  
  for(int i=0;i<n;i++){
   
   ll siz;
   cin>>siz;
   
   string ins;
   cin>>ins;
   
   for(char c:ins){
    if(c=='D'){
     ans[i]++;
     ans[i]%=10;
    }
    else if(c=='U'){
     ans[i]--;
     if(ans[i]<0){
      ans[i]+=10;
     }
     ans[i]%=10;
    }
   }
  }
  
  for(auto x:ans){
   cout<<x<<" ";
  }
  cout<<endl;
 }
 return 0;}