// Problem: B. Odd Subarrays
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n;
  cin>>n;
  int dp[n+1]={0};
  ll a[n];
  ll cnt =0;
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  dp[0]=0;
  if(a[0]>a[1]){
   dp[1]=1;
  }
  else{
   dp[1]=0;
  }
  
  for(ll i=2;i<n;i++){
   //cout<<dp[i-1]<<" "<<dp[i-2]<<"\n";
   if(a[i-1]>a[i])
   dp[i] = max(dp[i-1],dp[i-2]+1);
   else{
    dp[i]=max(dp[i-1],dp[i-2]);
   }
  }
  
  
  cout<<dp[n-1]<<"\n";
 }
 
 return 0;
}