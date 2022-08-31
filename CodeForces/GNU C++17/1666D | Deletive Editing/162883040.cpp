// Problem: D. Deletive Editing
// Contest: Codeforces - 2021-2022 ICPC, NERC, Northern Eurasia Onsite (Unrated, Online Mirror, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1666/problem/D
// Memory Limit: 512 MB
// Time Limit: 3000 ms
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
  
  string s;
  cin>>s;
  string p;
  cin>>p;
  reverse(s.begin(),s.end());
  reverse(p.begin(),p.end());
  map<char,ll> mp;
  for(auto c:p){
   mp[c]++;
  }
  string ans ="";
  for(auto c:s){
   if(mp[c]){
    mp[c]--;
    ans+=c;
   }
  }
  //cout<<ans<<endl;
  if(ans == p){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 
 return 0;
}