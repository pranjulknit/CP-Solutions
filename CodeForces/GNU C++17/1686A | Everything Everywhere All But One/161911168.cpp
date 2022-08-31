// Problem: A. Everything Everywhere All But One
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1686/A
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
  
  ll sum = 0;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   sum += a[i];
  }
  
   bool yes= false;
  for(ll i=0;i<n;i++){
   sum-=a[i];
   //cout<<sum<<"\n";
   ll mean = sum/(n-1);
   if(mean == a[i]&& sum%(n-1)==0){
    yes = true;
    break;
   }
   else{
    sum+=a[i];
   }
  }
  
  if(yes){
   cout<<"YES"<<"\n";
   
  }else{
   cout<<"NO"<<"\n";
  }
 }
 return 0;
}