// Problem: B. Balanced Remainders
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/B
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
 
 vector<ll> v(n);
 ll c[3]={0};
 for(ll i=0;i<n;i++){
  cin>>v[i];
  c[v[i]%3]++;
  
 }
 // for(auto x:c){
  // cout<<x<<" ";
 // }
 ll equ = (c[0]+c[1]+c[2])/3;
 ll ans = 0;
 ll i=0;
 while(c[0]!= c[1] || c[2] != c[1]){
  //cout<<c[i%3]<<" ";
  if(c[i%3]>equ){
   c[(i+1)%3]++;
   c[i%3]--;
   ans++;
  }
  
  i++;
 }
 
 cout<<ans<<endl;
}
 }