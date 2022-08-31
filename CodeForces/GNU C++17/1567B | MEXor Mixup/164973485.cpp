// Problem: B. MEXor Mixup
// Contest: Codeforces - Codeforces Round #742 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1567/B
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
vector<ll> xor_val(500000,0);
 
for(ll i=1;i<500000;i++){
 xor_val[i]=xor_val[i-1]^i;
}
 
while(t--){
  ll mex,xr;
  cin>>mex>>xr;
  
  ll val = xor_val[mex-1];
  
  if(val==xr){
   cout<<mex<<endl;
  }
   else{
   // xor b ke equal nhi aaya
   
   ll req= (xr^val);
   
   if(req == mex){
    cout<<mex+2<<endl;
   }
   else{
    cout<<mex+1<<endl;
   }
  }
 
 
}
 }