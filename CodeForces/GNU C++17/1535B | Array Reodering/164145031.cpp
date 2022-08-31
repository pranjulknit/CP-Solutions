// Problem: B. Array Reodering
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1535/B
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
 
bool comp(ll &a,ll &b){
 if(a%2==0){
  return true;
 }
 
 return false;
}
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 
 vector<ll> v(n);
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 //sort(v.begin(),v.end(),comp);
 
 // for(auto x:v){
  // cout<<x<<" ";
 // }
 // cout<<endl;
 ll cnt  =0;
 for(ll i=0;i<n;i++){
  for(ll j=i+1;j<n;j++){
   if(__gcd(v[i],2*v[j])>1 or __gcd(2*v[i],v[j]) >1){
    cnt++;
   }
  }
 }
 
 
 cout<<cnt<<endl;
}
 }