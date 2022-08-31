// Problem: B. Odd Grasshopper
// Contest: Codeforces - Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1607/B
// Memory Limit: 256 MB
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
 
int solve(string &s,ll n){
 
 if(n==0 || n==1){
  return 0;
 }
    
 
   // cout<<n<<endl;
 if(s[n-1]=='1' && s[n-2]=='1'){
         return 1+solve(s,n-1);
 }
 else{
  return solve(s,n-1);
 }
 
}
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll x,n;
  
  cin>>x>>n;
  
  ll d = n%4;
  //cout<<d<<endl;
  if(d==1){
   d=-n;
  }
  else if(d==2){
   d=1;
  }
  else if(d==3){
   d=n+1;
  }
  
  if(x==0 || x%2==0)
  cout<<x+d<<endl;
  else{
   cout<<x-d<<endl;
  }
 }
 }