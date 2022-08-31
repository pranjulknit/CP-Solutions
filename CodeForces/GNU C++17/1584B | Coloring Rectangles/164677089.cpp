// Problem: B. Coloring Rectangles
// Contest: Codeforces - Technocup 2022 - Elimination Round 2
// URL: https://codeforces.com/problemset/problem/1584/B
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
  ll a,b;
  cin>>a>>b;
  
  if(a*b %3==0){
   cout<<a*b/3<<endl;
  }
  else{
   cout<<a*b/3 +1<<endl;
  }
   
 }
return 0; }