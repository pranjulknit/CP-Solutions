// Problem: D. X-Sum
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/D
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
  
  ll a[n][m];
  
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    cin>>a[i][j];
   }
  }
  
  ll ans = INT_MIN;
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    ll row= i;
    ll col = j;
    
    ll check = 0;
    while(row>=0 && row<n && col>=0&& col<m){
     
     check +=a[row][col];
     row--;
     col--;
    }
    
    row = i,col = j;
    while(row>=0 && row<n && col>=0&& col<m){
     if(row!=i && col!=j)
     check +=a[row][col];
     row++;
     col--;
    }
    row = i,col=j;
    while(row>=0 && row<n && col>=0&& col<m){
     if(row!=i && col!=j)
     check +=a[row][col];
     row++;
     col++;
    }
    row = i,col =j;
    while(row>=0 && row<n && col>=0&& col<m){
     if(row!=i && col!=j)
     check +=a[row][col];
     row--;
     col++;
    }
    ans = max(ans,check);
    
   }
   
   
  }
  cout<<ans<<endl;
 }
 return 0;
}