// Problem: B. Numbers Box
// Contest: Codeforces - Codeforces Round #683 (Div. 2, by Meet IT)
// URL: https://codeforces.com/problemset/problem/1447/B
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
  
  vector<vector<ll>> v(n,vector<ll>(m));
  
  ll cntneg= 0;
  ll sum =0;
  ll mn= INT_MAX;
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    cin>>v[i][j];
    if(v[i][j]<0){
     cntneg++;
    }
    v[i][j]=abs(v[i][j]);
    
    mn = min(mn,v[i][j]);
    sum += v[i][j];
   }
  }
  
  if(cntneg&1){
   cout<<sum -2*mn<<endl;
   continue;
  }
  
  cout<<sum<<endl;
  
 }
 }