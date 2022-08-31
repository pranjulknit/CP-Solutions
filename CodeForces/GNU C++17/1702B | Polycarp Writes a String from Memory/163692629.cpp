// Problem: B. Polycarp Writes a String from Memory
// Contest: Codeforces - Codeforces Round #805 (Div. 3)
// URL: https://codeforces.com/contest/1702/problem/B
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
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  string s;
  cin>>s;
  
  map<char,ll> mp;
  ll ans=0;
  for(char c:s){
   mp[c]++;
   if(mp.size()==4){
    mp.clear();
    mp[c]++;
    ans++;
   }
  }
  if(mp.size()<4){
   ans++;
  }
  cout<<ans<<endl;
 }
 return 0;}