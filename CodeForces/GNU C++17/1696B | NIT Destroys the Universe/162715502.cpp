// Problem: B. NIT Destroys the Universe
// Contest: Codeforces - Codeforces Global Round 21
// URL: https://codeforces.com/problemset/problem/1696/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define endl "\n"
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
  
  ll cnt=0;
  
  for(ll i=0;i<n;i++){
   if(a[i]!=0){
    cnt++;
    while(a[i]!=0 && i<n){
     i++;
    }
   }
  }
  if(cnt==0){
   cout<<0<<endl;
   
  }
  else if(cnt==1){
   cout<<1<<endl;
  }
  else{
   cout<<2<<endl;
  }
 }
 
 return 0;
}