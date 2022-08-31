// Problem: A. Regular Bracket Sequence
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1469/A
// Memory Limit: 512 MB
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
  string s;
  
  cin>>s;
  ll n= s.size();
  if(s[0]==')'|| s[n-1]=='('){
   cout<<"NO"<<endl;
   continue;
  }
  ll quest = 0;
  ll sum =0;
  for(ll i=0;i<n;i++){
   if(s[i]=='('){
    sum++;
   }
   else if(s[i]==')'){
    sum--;
   }
   else if(s[i]=='?'){
    quest++;
   }
  }
  if(sum==0 && quest%2==0){
   cout<<"YES" <<endl;
  }
  else if(abs(sum)==quest){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 return 0;}