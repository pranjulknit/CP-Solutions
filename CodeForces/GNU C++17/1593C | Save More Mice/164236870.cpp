// Problem: C. Save More Mice
// Contest: Codeforces - Codeforces Round #748 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1593/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
int solve(vector<ll> v,ll mid,ll n){
 
 ll cnt= 0;
 for(ll i=0;i<n;i++){
  if(n-v[i]<mid){
   cnt++;
  }
 }
 
 return cnt;
}
 
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
  ll n,k;
  cin>>n>>k;
  
  vector<ll> v(k);
  
  for(ll i=0;i<k;i++){
   cin>>v[i];
  }
  sort(v.rbegin(),v.rend());
  
  ll position = 0;
  ll cnt = 0;
  for(ll i=0;i<k;i++){
   if(position<v[i]){
    position +=(n-v[i]);
    cnt++;
   }
   else{
    break;
   }
  }
  
  cout<<cnt<<endl;
  
}
 }