// Problem: B. Permutation
// Contest: Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1701/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  
  if(n==2){
   cout<<2<<endl;
   cout<<1<<" "<<2<<endl;
  }
  else if(n==3){
   cout<<3<<endl;
   cout<<1<<" "<<3<<" "<<2<<endl;
  }
  else{
   //ll d= log2(n);
   cout<<2<<endl;
   for(ll i=1;i<=n;i+=2){
    for(ll j=i;j<=n;j*=2){
     cout<<j<<" ";
    }
   }
   cout<<endl;
  }
 }
 return 0;}