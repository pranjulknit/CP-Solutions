// Problem: B. String LCM
// Contest: Codeforces - Educational Codeforces Round 102 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1473/B
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
 
 
inline ll gcd (ll a,ll b){
 if(b==0){
  return a; // gcd(a,0)==a;
 }
 gcd(b,a%b);
}
 
 
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
  string s,t;
  cin>>s>>t;
  
  ll siz1= s.size();
  ll siz2 = t.size();
  
  ll lcm = (siz1*siz2)/(gcd(siz1,siz2));
  
  ll loop = lcm/siz1;
  string check="";
  while(loop--){
   check+=s;
  }
  
  ll loop2 = lcm/siz2;
  string check2 = "";
  while(loop2--){
   check2+=t;
  }
  //cout<<check<<endl;
  
  if(check == check2){
   cout<<check<<endl;
  }
  else{
   cout<<-1<<endl;
  }
 }
 return 0;}