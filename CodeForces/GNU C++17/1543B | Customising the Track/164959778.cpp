// Problem: B. Customising the Track
// Contest: Codeforces - Codeforces Round #730 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1543/B
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
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  ll sum = 0;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   sum+=v[i];
  }
  
  ll  x= sum%n;
  //cout<<x<<endl;
  ll ano = n-x;
  
  cout<<x*ano<<endl;
  
  
 }
   
 }