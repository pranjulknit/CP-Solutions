// Problem: B. Sum of Medians
// Contest: Codeforces - Codeforces Round #684 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1440/B
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
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n*k+1);
   
   
   for(ll i=1;i<=n*k;i++){
    cin>>v[i];
   }
   if(n==1 or n==2){
    ll sum = 0;
    for(ll i=1;i<=n*k;i+=n){
     sum +=v[i];
    }
    cout<<sum<<endl;
   }
   else{
    ll med = (n+1)/2;
    
    ll inter = n-med + 1;
    //cout<<inter<<endl;
    ll x=1;
    ll subarr = 0;
    ll sum = 0;
    for(ll i=n*k;i>=1;i--){
     if(x%inter==0){
      subarr++;
     // cout<<v[i]<<" ";
      sum+=v[i];
     }
     x++;
     
     if(subarr>=k){
      break;
     }
    }
    
    cout<<sum<<endl;
   }
  }
 }