// Problem: B. Luntik and Subsequences
// Contest: Codeforces - Codeforces Round #750 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1582/B
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
 ll n;
 cin>>n;
 
 vector<ll> v(n);
 ll cntzero = 0;
 ll cntone = 0;
 for(ll i=0;i<n;i++){
  cin>>v[i];
  
  if(v[i]==0){
   cntzero++;
  }
  else if(v[i]==1){
   cntone++;
  }
 }
 
 
 cout<<(ll) pow(2,cntzero)*cntone<<endl;
 
}
 }