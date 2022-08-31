// Problem: A. Prof. Slim
// Contest: Codeforces - Codeforces Round #788 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1670/A
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
  
  vector<ll>v(n);
  ll minus = 0;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   if(v[i]<0){
    minus++;
    v[i]*=-1;
    
   }
  }
  
  
  for(ll i=0;i<n;i++){
   if(minus>0){
    v[i]*=-1;
    minus--;
   }
  }
  
  // for(auto x:v){
   // cout<<x<<" ";
  // }
  // cout<<endl;
  ll i;
  for( i=0;i<n-1;i++){
   if(v[i+1]<v[i]){
    break;
   }
  }
  
  if(i==n-1){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  
  }
 }
 
 return 0;
}