// Problem: A. Min Or Sum
// Contest: Codeforces - Codeforces Round #772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1635/A
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
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
   
  }
  
  //sort(v.begin(),v.end());
  ll sum =0;
  for(ll i=0;i<n-1;i++){
   
    v[i+1]=(v[i]|v[i+1]);
    v[i]=0;
    
   //sum +=(v[i]+v[i+1]);
   
  }
  
  for(int x:v){
   sum+=x;
  }
  //cout<<endl;
  cout<<sum<<endl;
 }
 return 0;
}