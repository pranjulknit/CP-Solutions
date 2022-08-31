// Problem: N. Waste Sorting
// Contest: Codeforces - 2020-2021 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules)
// URL: https://codeforces.com/problemset/problem/1468/N
// Memory Limit: 512 MB
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
 ll c[3];
 for(ll i=0;i<3;i++){
  cin>>c[i];
 }
 
 ll a[5];
 
 for(ll i=0;i<5;i++){
  cin>>a[i];
 }
 
 ll rem[3];
 bool no = false;
 for(ll i=0;i<3;i++){
  rem[i] = c[i]-a[i];
  
  if(rem[i]<0){
   no = true;
   break;
  }
 }
 
 if(no){
  cout<<"NO"<<endl;
  continue;
 }
 
 //cout<<a[4]<<endl;
 rem[1]-=a[4];
 rem[0]-=a[3];
 //cout<<rem[0]<<endl;
 ll check;
 if(rem[1]>=0 && rem[0]>=0){
  cout<<"YES"<<endl;
  continue;
 }
 if(rem[1]<0 && rem[0]<0)
  check = rem[1]+rem[0];
 else if(rem[0]<0)
  check =rem[0];
 else if(rem[1]<0)
  check = rem[1];
 
 
 rem[2]+=check;
 
 if(rem[2]<0){
  cout<<"NO"<<endl;
 }
 else{
  cout<<"YES"<<endl;
 }
}
 }