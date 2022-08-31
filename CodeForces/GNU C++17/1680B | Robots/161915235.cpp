// Problem: B. Robots
// Contest: Codeforces - Educational Codeforces Round 128 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1680/B
// Memory Limit: 512 MB
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
  
  char c[n][m];
  vector<pair<ll,ll>>ind;
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    cin>>c[i][j];
    if(c[i][j]=='R'){
     ind.push_back({i,j});
    }
   }
  }
  
  //pair<ll,ll> dif = {ind[0].first,ind[1].second};
 bool no = false;
  for(ll i=1;i<ind.size();i++){
   if((ind[i].first - ind[0].first)<0 ||(ind[i].second - ind[0].second)<0){
    no = true;
    break;
   }
  }
  if(no){
   cout<<"NO"<<"\n";
  }
  else{
   cout<<"YES"<<"\n";
  }
  
 }
 return 0;
}