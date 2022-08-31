// Problem: B. Elimination
// Contest: Codeforces - Codeforces Round #680 (Div. 2, based on Moscow Team Olympiad)
// URL: https://codeforces.com/problemset/problem/1445/B
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
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  //cout<<a+b<<endl;
  cout<<max(a+b,c+d)<<endl;
 }
 }