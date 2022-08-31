// Problem: B. I love AAAB
// Contest: Codeforces - Codeforces Global Round 20
// URL: https://codeforces.com/problemset/problem/1672/B
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
  ll prefix=0;
  ll n = s.size();
  bool no = false;
  for(ll i=0;i<n;i++){
   if(s[i]=='A'){
    prefix++;
   }
   else{
    prefix--;
   }
   if(prefix<0){
    no = true;
    break;
   }
  }
  
  if(!no && s[n-1]=='B'){
   cout<<"YES"<<"\n";
  }
  else{
   cout<<"NO"<<"\n";
  }
  
  
 }
 return 0;
}