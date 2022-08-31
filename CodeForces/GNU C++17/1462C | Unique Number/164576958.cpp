// Problem: C. Unique Number
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1462/C
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
 if(n<=9){
  cout<<n<<endl;
  continue;
 }
 if(n<=17){
  cout<<n-9<<9<<endl;
 }
 else if(n<=24){
  cout<<n-17<<8<<9<<endl;
 }
 else if(n<=30){
  cout<<n-24<<7<<8<<9<<endl;
 }
 else if(n<=35){
  cout<<n-30<<6<<7<<8<<9<<endl;
 }
 else if(n<=39){
  cout<<n-35<<5<<6<<7<<8<<9<<endl;
 }
 else if(n<=42){
  cout<<n-39<<4<<5<<6<<7<<8<<9<<endl;
 }
 else if(n<=44){
  cout<<n-42<<3<<4<<5<<6<<7<<8<<9<<endl;
 }
 else if(n<=45){
  cout<<1<<2<<3<<4<<5<<6<<7<<8<<9<<endl;
 }
 else{
  cout<<-1<<endl;
 }
}
 }