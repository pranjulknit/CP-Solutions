// Problem: B. Different Divisors
// Contest: Codeforces - Codeforces Round #696 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1474/B
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
 
vector<ll> prime;
 
void prime_gen(ll x){
 
 prime.push_back(2);
 prime.push_back(3);
 for(ll i=4;i<=x;i++){
  //cout<<i<<" ";
  bool yes = true;
  for(ll j=2;j*j<=i;j++){
   if(i%j==0){
    yes = false;
    break;
   }
  }
  
  if(yes){
   //cout<<i<<endl;
   prime.push_back(i);
  }
 }
}
 
int main(){
 
 ll t;
 cin>>t;
 prime_gen(100000);
//  
 // for(auto x:prime){
  // cout<<x<<endl;
 // }
 while(t--){
  ll d;
  cin>>d;
  ll p=0,q=0;
  for(ll i=0;i<prime.size();i++){
   if(prime[i]>d && p==0){
    p = prime[i];
    //cout<<p<<endl;
   }
   else if(prime[i]>=d+p && p!=0){
    
    q = prime[i];
    //cout<<q<<endl;
    break;
   }
   
  }
  
  //cout<<p<<" "<<q<<endl;
  cout<<min(p*q,p*p*p)<<endl;
 }
 }