// Problem: C. Double-ended Strings
// Contest: Codeforces - Codeforces Round #710 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1506/C
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
 
 // bool isSub(string s,string check){
  // ll k =0;
//   
  // ll check_siz = check.size();
//  
  // for(auto c:s){
//    
   // if(c==check[k]){
//     
    // k++;
   // }
   // else if(check[k]!=c and check[0]==c){
    // continue;
   // }
   // else if(check[k]!=c and check[0]!=c){
    // k=0;
   // }
//    
   // if(k>=check_siz){
    // return true;
   // }
  // }
//   
  // return false;
 // }
 
 
 bool isSub(string s,string check){
  
  if(s.find(check)!= string::npos){
   return true;
  }
  
  return false;
 }
 
 
int main(){
 
 
ll t;
cin>>t;
 
while(t--){
 
 string s;
 cin>>s;
 
 string t;
 cin>>t;
 if(s.size()<t.size()){
  swap(s,t);
 }
 ll n= t.size();
 
 //bool yes = false;
 
 ll mx = 0;
 for(ll i=1;i<=n;i++){
  
  for(ll j=0;j<n;j++){
   string check = t.substr(j,i);
   //cout<<check<<endl;
   if(isSub(s,check)){
    mx = max(mx,(ll)check.size());
    
   }
   
  }
  
 }
 
 
  
  cout<<t.size()+s.size()-2*mx<<endl;
 
 
 
 }
return 0;
 }