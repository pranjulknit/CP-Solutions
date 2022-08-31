// Problem: A. Download More RAM
// Contest: Codeforces - Codeforces Round #767 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1629/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  ll n,k;
  cin>>n>>k;
  
  vector<pair<ll,ll>>v(n);
  
  
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   
   v[i].first = insrt;
  }
  
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   
   v[i].second = insrt;
  }
  
  
  sort(v.begin(),v.end());
  
    for(ll i=0;i<n;i++){
     //cout<<v[i].first<<" "<<v[i].second<<"\n";
       if(k>=v[i].first){
        k+=v[i].second;
       }
       else{
        break;
       }
    }
    
    cout<<k<<"\n";
  
 }
 return 0;
}