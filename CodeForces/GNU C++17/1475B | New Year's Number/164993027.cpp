// Problem: B. New Year's Number
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
 ll n;
 cin>>n;
 // from solving eqn
 ll y = n%2020;
 
 ll x= (n-y)/2020 -y;
 
 if(x>=0){
  cout<<"YES"<<endl;
 }
 else{
  cout<<"NO"<<endl;
 }
 
}
 }