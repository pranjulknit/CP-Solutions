// Problem: C. Most Similar Words
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll n,m;
  
  cin>>n>>m;
  
  vector<string> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  //sort(v.begin(),v.end());
  ll ans = INT_MAX;
  for(ll i=0;i<n;i++){
   
   for(ll j=i+1;j<n;j++){
    ll sum=0;
    for(ll k=0;k<m;k++){
     sum +=abs(v[j][k]-v[i][k]);
    }
    ans = min(ans,sum);
   }
  }
  cout<<ans<<"\n";
 }
 return 0;
}