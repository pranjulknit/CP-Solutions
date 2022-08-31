// Problem: B. DIV + MOD
// Contest: Codeforces - Codeforces Round #776 (Div. 3)
// URL: https://codeforces.com/contest/1650/problem/B
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
  ll l,r,a;
  cin>>l>>r>>a;
  
  if(a==1|| r<a){
   cout<<r<<"\n";
  }
  else{
   
    //cout<<"y";
    //cout<<((r-1)/a)<<"\n";
    ll check = (r-(r%a))-1;
    //cout<<(r-(r%a))<<"\n";
      if(check>=l){
       cout<<max(a-1+ (check/a),r/a + r%a)<<"\n";
      }
      else{
       cout<<r%a + r/a<<"\n";
      }
   
  }
  }
 
 return 0;
 
}