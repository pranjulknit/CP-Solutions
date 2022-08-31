// Problem: B. Red and Blue
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1469/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
 
using namespace std;
 
int solve(string &s,ll n){
 
 if(n==0 || n==1){
  return 0;
 }
    
 
   // cout<<n<<endl;
 if(s[n-1]=='1' && s[n-2]=='1'){
         return 1+solve(s,n-1);
 }
 else{
  return solve(s,n-1);
 }
 
}
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  vector<ll> a(n);
  
  vector<ll> prefix1(n+1,0);
  for(ll i=0;i<n;i++){
   cin>>a[i];
   prefix1[i+1] = prefix1[i]+a[i];
  }
  
  ll m;
  cin>>m;
  
  vector<ll> b(m);
  vector<ll> prefix2(m+1,0);
  
  for(ll i=0;i<m;i++){
   cin>>b[i];
   prefix2[i+1] = prefix2[i]+b[i];
  }
  ll mxpref1 =-100000000;
  ll mxpref2 = -100000000;
  for(ll i=0;i<=n;i++){
   //cout<<prefix1[i]<<endl;
   mxpref1 = max(mxpref1,prefix1[i]);
  }
  
  for(ll i=0;i<=m;i++){
   mxpref2 = max(mxpref2,prefix2[i]);
  }
  
  cout<<max(0ll,mxpref1+mxpref2)<<endl;
 }
 }