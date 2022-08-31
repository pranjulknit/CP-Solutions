// Problem: B. Patchouli's Magical Talisman
// Contest: Codeforces - Codeforces Round #796 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1688/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
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
  
  ll a[n];
  ll cntodd = 0;
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
   if(a[i]&1)
   cntodd++;
   //mn = min(mn,a[i]);
  }
  
  
  if(cntodd>0){
   cout<<n-cntodd<<endl;
  }
  else{
   ll cnt=0;
   ll mn=(ll)1e9;
   //vector<pair<ll,ll>> v(n);
   for(ll i=0;i<n;i++){
    ll cnt=0;
    while(a[i]%2==0){
     cnt++;
     a[i] /=2;
    }
    
      mn = min(mn,cnt);
    //cout<<mn<<endl;
   }
   //cout<<cnt<<endl;
   cout<<n-1 +mn<<endl;
  }
  
 }
 return 0;
}