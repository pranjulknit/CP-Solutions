// Problem: B. Missing Bigram
// Contest: Codeforces - Codeforces Round #760 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1618/B
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
  ll n;
  cin>>n;
  string s;
  cin>>s;
  //string s[n-2];
  string ans = "";
  ans+=s;
  //ll k=1;
  for(ll i=1;i<n-2;i++){
   //string s;
   cin>>s;
   if(s[0]==ans[ans.size()-1])
   ans += s[1];
   else{
    ans+=s;
   }
  }
  
  if(ans.size()==n){
   cout<<ans<<"\n";
  }
  else{
   
   while(ans.size()<n){
    ans+="b";
   }
   
   cout<<ans<<"\n";
  }
 }
 return 0;
}