// Problem: A. Add and Divide
// Contest: Codeforces - Codeforces Round #701 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1485/A
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
  ll a,b;
  cin>>a>>b;
 
 
  ll ans = INT_MAX;
  
  for(ll i=0;i<=30;i++){
   if(i+b==1){
    continue;
   }
   //b+=i;
   ll temp = a;
   ll cnt=0;
   
   while(temp!=0){
    temp/=b+i;
    cnt++;
   }
   //b++;
   ans = min(cnt+i,ans);
  }
  
  cout<<ans<<endl;
 }
 return 0;}