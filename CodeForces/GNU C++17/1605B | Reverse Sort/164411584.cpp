// Problem: B. Reverse Sort
// Contest: Codeforces - Codeforces Round #754 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1605/B
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
 
 string s;
 cin>>s;
 
 string temp = s;
 
 sort(temp.begin(),temp.end());
 
 if(temp==s){
  cout<<0<<endl;
  continue;
 }
 ll zeroindex=0;
 for(ll i=0;i<n;i++){
  if(temp[i]=='1'){
   zeroindex = i-1;
   break;
  }
 }
 
 vector<ll> ans;
 
 for(ll i=0;i<=zeroindex;i++){
  if(s[i]=='1'){
   ans.push_back(i+1);
   
  }
 }
 
  for(ll i=zeroindex+1;i<n;i++){
  if(s[i]=='0'){
   ans.push_back(i+1);
   
  }
 }
 cout<<1<<endl;
 cout<<ans.size()<<" ";
 for(auto x:ans){
  cout<<x<<" ";
 }
 
 cout<<endl;
}
 }