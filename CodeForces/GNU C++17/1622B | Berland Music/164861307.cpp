// Problem: B. Berland Music
// Contest: Codeforces - Educational Codeforces Round 120 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1622/B
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
 
bool comp(pll &p, pll &q){
 
 if(p.second== 1 and q.second==1){
  return p<q;
 }
 else if((p.second == 1 and q.second == 0) or (q.second == 1 and p.second == 0)){
  return true;
 }
 
 return false;
}
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  vector<ll> v(n);
   map<ll,ll>mp;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   mp[v[i]]=i;
  }
  
  string s;
  
  cin>>s;
  
  //vector<pll> check;
  vector<pll> one,two;
 
  for(ll i=0;i<n;i++){
   if(s[i]=='1'){
   one.push_back({v[i],i}); 
   }
   else{
    two.push_back({v[i],i});
   }
  }
  
  sort(one.begin(),one.end());
  sort(two.begin(),two.end());
  
  ll cnt= 1;
  
  ll ans[n];
  
 
  for(ll i=0;i<two.size();i++){
     ans[two[i].second]=cnt++;
  }
  for(ll i=0;i<one.size();i++){
     ans[one[i].second]=cnt++;
  }
  
  for(auto x:ans){
   cout<<x<<" ";
  }
  
  cout<<endl;
  
 }
 
 return 0;}