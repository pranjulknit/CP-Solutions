// Problem: D. Double Strings
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/D
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
  ll n;
  cin>>n;
  
  map<string,ll> mp;
  vector<string> v;
  while(n--){
   string s;
   cin>>s;
   v.push_back(s);
   mp[s]++;
  }
  vector<ll> ans;
  for(ll i=0;i<v.size();i++){
   string check = v[i];
   bool one = false;
   for(ll i=0;i<check.size();i++){
    string prefix = check.substr(0,i);
    string suffix = check.substr(i,check.size()-i);
    if(mp[prefix]&&mp[suffix]){
       one = true;
       break;
    }
   }
   if(one){
    ans.push_back(1);
   }
   else{
    ans.push_back(0);
   }
  }
  
  for(auto x:ans){
   cout<<x;
  }
  cout<<endl;
 }
 return 0;}