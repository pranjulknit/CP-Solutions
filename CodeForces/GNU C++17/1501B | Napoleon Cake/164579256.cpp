// Problem: B. Napoleon Cake
// Contest: Codeforces - Codeforces Round #707 (Div. 2, based on Moscow Open Olympiad in Informatics)
// URL: https://codeforces.com/problemset/problem/1501/B
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
 ll n;
 cin>>n;
 
 vector<ll> a(n);
 
 for(ll i=0;i<n;i++){
  cin>>a[i];
 }
 
 ll temp = a[n-1];
 
 ll i= n-1;
 ll stack = n;
 
 vector<ll> ans(n,0);
 while(i>=0){
  temp =  max(temp,a[i]);
  if(temp>0){
   stack--;
   ans[i]=1;
   temp--;
  }
  i--;
 }
 
 for(auto x:ans){
  cout<<x<<" ";
 }
 
 cout<<endl;
}
 }