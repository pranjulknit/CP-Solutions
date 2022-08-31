// Problem: A. Marin and Photoshoot
// Contest: Codeforces - Codeforces Round #779 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1658/A
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
  ll n ;
  cin>>n;
  string s;
  cin>>s;
    //ll n = s.size();
    ll cntone =0;
    ll cntdouble = 0;
  for(ll i=0;i<n;i++){
   if(s[i]=='0' && s[i+1]=='0' && (i+1)<n){
    //cout<<"y"<<endl;
    cntdouble++;
   }
   else if(s[i]=='0' && s[i+1]!='0' && s[i+2]=='0' && (i+1)<n && (i+2)<n){
    cntone++;
    i+=1;
   }
  }
  
  cout<< 2*cntdouble+cntone<<endl;
 }
 return 0;
}