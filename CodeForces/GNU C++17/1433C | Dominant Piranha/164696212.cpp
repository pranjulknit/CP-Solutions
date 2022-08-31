// Problem: C. Dominant Piranha
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1433/C
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
 
 while(t--){
  ll n;
  cin>>n;
  
  vector<ll> a(n);
  
  
  map<ll,ll> mp;
    ll mx = -1;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   mp[a[i]]++;
   
   mx = max(mx,a[i]);
   
   
  }
  
 
  
  if(mp.size()==1){
   cout<<-1<<endl;
   continue;
  }
  
  ll ans=-1;
  for(ll i=0;i<n;i++){
   if(a[i]<mx){
   
    if(i-1>=0 and a[i-1]==mx){
     ans = i;
     break;
    }
    
    
    if(i+1<n and a[i+1]==mx){
     ans = i+2;
     
     break;
    }
    
    
    
   }
  }
  
  cout<<ans<<endl;
 }
 }