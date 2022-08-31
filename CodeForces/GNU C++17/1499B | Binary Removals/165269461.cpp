// Problem: B. Binary Removals
// Contest: Codeforces - Educational Codeforces Round 106 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1499/B
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
     
     string ans = s;
     
     sort(ans.begin(),ans.end());
     
     if(ans==s){
      cout<<"YES"<<endl;
      continue;
     }
     ll n= s.size();
     ans="";
     ll i;
     for(i=0;i<n-1;i++){
      if(s[i]=='1' && s[i+1]=='0'){
       i++;
      }
      else{
       ans +=s[i];
      }
     }
     if(i==n-1){
      ans+=s[n-1];
     }
     
     string temp = ans;
     
     sort(temp.begin(),temp.end());
     
     if(temp == ans){
      cout<<"YES"<<endl;
     }
     else{
      cout<<"NO"<<endl;
     }
     
    }
 }