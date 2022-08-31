// Problem: C. Polycarp Recovers the Permutation
// Contest: Codeforces - Codeforces Round #756 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1611/C
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
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 
 ll a[n];
 ll mx = -1;
 for(ll i=0;i<n;i++){
  cin>>a[i];
  mx = max(a[i],mx);
 }
 
 if(a[n-1]!=mx && a[0]!=mx){
  cout<<-1<<endl;
 }
 else{
  ll k;
  if(n&1)
  k = n/2;
  else{
  k= n/2 -1;
  }
  for(ll i=k;i>=0;i--){
   cout<<a[i]<<" ";
  }
  for(ll i=n-1;i>k;i--){
   cout<<a[i]<<" ";
  }
  
  cout<<endl;
 }
}
 return 0;}