// Problem: B. Non-Substring Subsequence
// Contest: Codeforces - Codeforces Round #685 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1451/B
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
 ll n,q;
 cin>>n>>q;
 
 string s;
 cin>>s;
 map<char,vector<ll>> mp;
 for(ll i=0;i<s.size();i++){
  mp[s[i]].push_back(i+1);
 }
 while(q--){
  ll a,b;
  cin>>a>>b;
  
  if(mp[s[a-1]][0] < a){
   cout<<"YES"<<endl;
   continue;
  }
  
   if(mp[s[b-1]][mp[s[b-1]].size()-1] > b){
    cout<<"YES"<<endl;
    continue;
   }
  
  cout<<"NO"<<endl;
 }
}
 return 0;}