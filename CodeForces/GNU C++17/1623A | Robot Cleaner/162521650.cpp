// Problem: A. Robot Cleaner
// Contest: Codeforces - Codeforces Round #763 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1623/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 // void solve(ll n,ll m,ll r,ll c,ll ta,ll tb,ll dx,ll dy){
  // if(r==ta || c==tb){
   // return 0;
  // }
//   
  // if(r==n){
   // dx = -1*dx;
  // }
  // if(c==m){
   // dy = -1*dy;
  // }
 // }
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n,m,ra,rb,ta,tb;
  
  cin>>n>>m>>ra>>rb>>ta>>tb;
  
  if(ra==ta || rb==tb){
   cout<<0<<"\n";
  }
  else{
   ll check1,check2;
   if(tb>rb){
    check1= tb-rb;
   }
   else if(tb<rb){
    check1 = 2*m-tb-rb;
   }
   
   if(ta>ra){
    check2 = ta-ra;
   }
   else if(ta<ra){
    check2 = 2*n-ta-ra;
   }
   
   cout<<min(check1,check2)<<"\n";
  }
  
 }
 //cout<<ans<<"\n";
 return 0;
}