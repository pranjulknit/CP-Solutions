// Problem: B. Prefix Removals
// Contest: Codeforces - Codeforces Round #778 (Div. 1 + Div. 2, based on Technocup 2022 Final Round)
// URL: https://codeforces.com/problemset/problem/1654/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  
  map<char,ll> mp;
  
  for(char c:s){
   mp[c]++;
  }
  ll n=s.size();
  int i;
  for(i=0;i<n;i++){
   if(mp[s[i]]>1){
    mp[s[i]]--;
    continue;
    
   }
   else{
    break;
   }
  }
  
  cout<<s.substr(i,n)<<"\n";
 }
 return 0;
}