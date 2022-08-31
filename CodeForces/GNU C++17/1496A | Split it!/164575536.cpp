// Problem: A. Split it!
// Contest: Codeforces - Codeforces Round #706 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1496/A
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
  ll n,k;
  cin>>n>>k;
  
  string s;
  
  cin>>s;
  
  if(k==0){
   cout<<"YES"<<endl;
   continue;
  }
  else{
   bool ispalin= true;
   for(ll i=0;i<k;i++){
    if(s[i]!=s[n-1-i]){
     ispalin = false;
     break;
    }
   }
   
   if(ispalin && 2*k<n){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
  }
  
 }
 }