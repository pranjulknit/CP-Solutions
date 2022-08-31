// Problem: A. Reverse and Concatenate
// Contest: Codeforces - Codeforces Round #770 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1634/A
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
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  if(k==0){
   cout<<1<<"\n";
  }
  else if(k>=1){
   string t=s;
   reverse(s.begin(),s.end());
   if(s==t){
    cout<<1<<"\n";
   }
   else{
    cout<<2<<"\n";
   }
  }
  
 
 }
 //cout<<ans<<"\n";
 return 0;
}