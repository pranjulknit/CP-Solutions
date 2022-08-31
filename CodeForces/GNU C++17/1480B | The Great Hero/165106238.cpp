// Problem: B. The Great Hero
// Contest: Codeforces - Codeforces Round #700 (Div. 2)
// URL: https://codeforces.com/contest/1480/problem/B
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
 ll attack,health,n;
 
 cin>>attack>>health>>n;
 
 vector<pll> v(n);
 
 for(ll i=0;i<n;i++){
  cin>>v[i].first;
 }
 
 for(ll i=0;i<n;i++){
  cin>>v[i].second;
 }
 sort(v.begin(),v.end());
 bool no = false;
 for(ll i=0;i<n;i++){
  if(health<=0){
   no = true;
   break;
  }
  ll monster_match = v[i].second/attack + bool(v[i].second%attack);
  ll hero_match  = health/v[i].first + bool(health%v[i].first);
  
  ll actual_match  = min(hero_match,monster_match);
  
  health -= actual_match * v[i].first;
  
  v[i].second -= actual_match *attack;
 }
 
 if(no){
  cout<<"NO"<<endl;
  continue;
 }
 if(v[n-1].second>0){
  cout<<"NO"<<endl;
 }
 else{
  cout<<"YES"<<endl;
 }
}
 }