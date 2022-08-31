// Problem: A. Red Versus Blue
// Contest: Codeforces - Codeforces Round #782 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1659/A
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
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 ll n,r,b;
 cin>>n>>r>>b;
 
 
 ll p= r/(b+1);
  r -= p*(b+1);
 for(ll j=0;j<p;j++){
   cout<<"R";
  }
 
 for(ll i=0;i<b;i++){
  if(r>0){
   cout<<"R";
   r--;
  }
  cout<<"B";
  
  for(ll j=0;j<p;j++){
   cout<<"R";
  }
 }
 
 cout<<endl;
}
 return 0;}