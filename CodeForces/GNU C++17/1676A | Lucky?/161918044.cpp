// Problem: B. Equal Candies
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
 ll tot = 0;
 ll parsum =0;
  for(ll i=0;i<s.size();i++){
   int num = s[i]-'0';
   tot += num;
   if(i<3){
    parsum += num;
   }
  }
  
  if(tot-parsum == parsum){
   cout<<"YES"<<"\n";
  }
  else{
   cout<<"NO"<<"\n";
  }
 }
 return 0;
}