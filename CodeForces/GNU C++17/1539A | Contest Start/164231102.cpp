// Problem: A. Contest Start
// Contest: Codeforces - Codeforces Round #727 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1539/A
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
 
 ll form(ll n){
  return n*(n+1)/2;
 }
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
       ll n,x,t;
       cin>>n>>x>>t;
        ll z = t/x;
       if(n < z){
        cout<<form(n-1)<<endl;
       }
       else{
       ll ans = n*z;
       
       ll extra = form(z);
       
       cout<<ans- extra<<endl;
       }
       
 }
 }