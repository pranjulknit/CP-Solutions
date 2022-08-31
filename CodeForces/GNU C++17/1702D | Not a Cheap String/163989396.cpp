// Problem: D. Not a Cheap String
// Contest: Codeforces - Codeforces Round #805 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1702/D
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
 
 bool comp(pair<char,ll> &p,pair<char,ll> &q){
  if(q.second>p.second){
   return true;
  }
  return false;
 }
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  string s;
  cin>>s;
  ll n = s.size();
  //string temp = s;
  //cout<<n<<endl;
  ll p;
  cin>>p;
  ll inti=0;
  vector<pair<char,ll>> v;
  
  for(ll i=0;i<n;i++){
   //cout<<4;
   inti +=(s[i]-'a' + 1);
   //cout<<5;
   v.push_back({s[i],i});
  }
  
  //cout<<inti<<endl;
  if(inti<=p){
   //cout<<5;
   cout<<s<<endl;
   continue;
  }
  sort(v.begin(),v.end());
  
  for(ll i=n-1;i>=0;i--){
   inti -=(v[i].first-'a' + 1);
   //cout<<inti<<endl;
   v[i].second = -1;
   if(inti <=p){
    break;
   }
  }
  
     sort(v.begin(),v.end(),comp);
     
     for(ll i=0;i<n;i++){
      if(v[i].second == -1){
       continue;
      }
      else{
       cout<<v[i].first;
      }
     }
     
     cout<<endl;
  
 }
 return 0;}