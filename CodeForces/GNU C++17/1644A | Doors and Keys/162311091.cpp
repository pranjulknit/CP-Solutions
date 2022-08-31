// Problem: A. Doors and Keys
// Contest: Codeforces - Educational Codeforces Round 123 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1644/A
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
  map<char,ll> map;
  ll i=0;
  for(char c:s){
   map[c]=i;
   i++;
  }
  
  
  
  if(map['R']>map['r'] && map['G']>map['g'] && map['B']>map['b']){
    cout<<"YES"<<"\n";
  }
  else{
   cout<<"NO"<<"\n";
  }
 }
 return 0;
}