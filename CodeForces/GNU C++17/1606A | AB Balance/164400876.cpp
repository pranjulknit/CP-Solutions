// Problem: A. AB Balance
// Contest: Codeforces - Educational Codeforces Round 116 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1606/A
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
  string s;
  cin>>s;
  
  ll n= s.size();
  ll ab =0;
  ll ba = 0;
  for(ll i=0;i<n-1;i++){
   if(s[i]=='a' && s[i+1]=='b'){
    ab++;
   }
    else if(s[i]=='b' && s[i+1]=='a'){
    ba++;
   }
  }
  //cout<<ab<<" "<<ba<<endl;
  // cout<<s<<endl;
  if(ab==ba){
   cout<<s<<endl;
   continue;
  }
  
 
 s[0]=s[n-1]='b';
 
 cout<<s<<endl;
  
}
 }