// Problem: A. Deletions of Two Adjacent Letters
// Contest: Codeforces - Codeforces Round #776 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1650/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define endl "\n"
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  string s;
  cin>>s;
  
  char c;
  cin>>c;
  //cin>>s;
  ll n= s.size();
    bool yes = false;
  for(ll i=0;i<n;i++){
   if(i%2==0){
    if(s[i]==c){
     yes = true;
     break;
    }
   }
  }
  
  if(yes){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 return 0;
}