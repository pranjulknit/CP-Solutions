// Problem: B. Groups
// Contest: Codeforces - Educational Codeforces Round 115 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1598/B
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
  bool yes = false;
  vector<vector<ll>> v(n,vector<ll>(5,0));
  
  for(ll i=0;i<n;i++){
   for(ll j=0;j<5;j++){
    cin>>v[i][j];
   }
  }
  
  for(ll i=0;i<5;i++){
   for(ll j=0;j<5;j++){
    if(j==i){
     continue;
    }
    ll day1 = i;
    ll day2 = j;
    ll cnt1 =0,cnt2=0,com=0;
    for(ll i=0;i<n;i++){
     if(v[i][day1]){
      cnt1++;
     }
     if(v[i][day2]){
      cnt2++;
     }
     
     if(v[i][day1] && v[i][day2]){
      com++;
     }
    }
    
    if(cnt1>=n/2 && cnt2>=n/2 and cnt1+cnt2-com==n){
      yes = true;
      break;
    }
   }
   if(yes){
    break;
   }
  }
  
  if(yes){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
  
 }
 return 0;}