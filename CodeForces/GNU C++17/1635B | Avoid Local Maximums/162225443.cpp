// Problem: B. Avoid Local Maximums
// Contest: Codeforces - Codeforces Round #772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1635/B
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
  
  ll a[n];
  ll mx = -1;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   mx = max(mx,a[i]);
  }
  ll cnt=0;
  for(ll i=1;i<n-1;i++){
   if(a[i]>a[i+1] && a[i]>a[i-1]){
     if(i+2<n)
     a[i+1]=max(a[i+2],a[i]);
     else{
           a[i+1]=a[i];
     }
     cnt++;
    
   }
   
  }
  //1 2 3 3 2 3 2 2 1 
  cout<<cnt<<"\n";
  
  for(ll i=0;i<n;i++){
   cout<<a[i]<<" ";
  }
  cout<<"\n";
 }
 return 0;
}