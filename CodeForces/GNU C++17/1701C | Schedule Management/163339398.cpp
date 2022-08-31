// Problem: C. Schedule Management
// Contest: Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1701/problem/C
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
 
bool solve(ll mid,map<ll,ll>&mp,ll n){
 ll left=0,help=0;
 
 for(ll i=1;i<=n;i++){
  if(mid>mp[i]){
   help +=(mid-mp[i])/2;
  }
  else{
   left+=(mp[i]-mid);
  }
 }
 //cout<<left<<" "<<help<<endl;
 if(left<=help){
  return true;
 }
 
 return false;
 
}
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,m;
  cin>>n>>m;
  
  vector<ll> v(m);
  map<ll,ll> mp;
  for(ll i=0;i<m;i++){
   cin>>v[i];
   mp[v[i]]++;
  }
  
  
  ll low= 1;
  ll high = 2*m;
  ll res=-1000;
  while(low<=high){
   ll mid = (low+high)/2;
   //cout<<"mid "<<mid<<endl;
   if(solve(mid,mp,n)){
    //cout<<"y";
    res= mid;
    high = mid-1;
   }
   else{
    low = mid+1;
   }
  }
  
  cout<<res<<endl;
 }
 return 0;}