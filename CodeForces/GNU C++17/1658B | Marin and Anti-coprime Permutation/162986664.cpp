// Problem: B. Marin and Anti-coprime Permutation
// Contest: Codeforces - Codeforces Round #779 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1658/B
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
 vector<ll> fact(1001,1);
 int MOD = 998244353;
 for(ll i=1;i<=1000;i++){
  fact[i]= ((fact[i-1]%MOD)*i)%MOD;
 }
 while(t--){
  ll n;
  cin>>n;
  
  if(n&1){
   cout<<0<<endl;
  }
  else{
   cout<<(fact[n/2]*fact[n/2])%MOD<<endl;
  }
 }
 return 0;
}