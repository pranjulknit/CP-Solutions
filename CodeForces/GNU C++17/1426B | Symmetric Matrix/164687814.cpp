// Problem: B. Symmetric Matrix
// Contest: Codeforces - Codeforces Round #674 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1426/B
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
  ll n,m;
  cin>>n>>m;
  
  
  ll a[n][2][2];
  
  
  for(ll i=0;i<n;i++){
   cin>>a[i][0][0]>>a[i][0][1]>>a[i][1][0]>>a[i][1][1];
   
  }
  
  if(m&1){
   cout<<"NO"<<endl;
   continue;
  }
  else{
   bool ys = false;
   for(ll i=0;i<n;i++){
   if(a[i][0][1]==a[i][1][0]){
    ys = true;
    break;
   }
   
  }
  
  if(ys){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
  }
  
 }
 }