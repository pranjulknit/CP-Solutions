// Problem: B. ICPC Balloons
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/B
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
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  string s;
  
  cin>>s;
  map<char,ll> mp;
  for(char c:s){
   mp[c]++;
  }
   ll ans = mp.size()*2;
  for(char i='A';i<='Z';i++){
   if(mp[i]>1){
    ans +=(mp[i]-1);
   }
  }
  
  cout<<ans<<endl;
 }
 
 return 0;}