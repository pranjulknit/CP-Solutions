// Problem: B. Prime Square
// Contest: Codeforces - Codeforces Round #678 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1436/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
map<ll,ll> prime;
 
void prime_Gen(ll x){
 
 prime[2]++;
 prime[3]++;
 for(ll i=4;i<=x;i++){
  bool yes = true;
  for(ll j=2;j*j<=i;j++){
   if(i%j==0){
    yes = false;
    break;
   }
  }
  
  if(yes){
   prime[i]++;
  }
 }
}
 
int main(){
 ll t;
 cin>>t;
 prime_Gen(2000);
 
 
 while(t--){
  ll n;
  cin>>n;
  // //cout<<n<<endl;
   // if(prime[n]){
// //    
   // for(ll i=0;i<n;i++){
    // for(ll j=0;j<n;j++){
      // cout<<1<<" ";
     // }
     // cout<<endl;
   // }
// 
  // continue;
   // }
 
  for(ll i=0;i<n;i++){
   //cout<<i<<endl;
   for(ll j=0;j<n;j++){
    //cout<<j<<endl;
    if((i==0 and j==0) or (j==i+1 or j==i) or (i==n-1 and (j==n-1 or j==0)) ){
     cout<<1<<" ";
    }
    else{
     cout<<0<<" ";
    }
   }
   cout<<endl;
  }
  
 }
 
 }