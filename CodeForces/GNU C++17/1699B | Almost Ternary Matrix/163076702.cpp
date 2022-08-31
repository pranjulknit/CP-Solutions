// Problem: B. Almost Ternary Matrix
// Contest: Codeforces - Codeforces Round #804 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1699/B
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
  ll n,m;
  cin>>n>>m;
  
  ll a[n][m];
  
  for(ll i=0;i<n;i+=2){
   for(ll j=0;j<m;j+=2){
    if((i+j)%4==0){
     a[i][j]=0;
     a[i][j+1]=1;
     a[i+1][j]=1;
     a[i+1][j+1]=0;
    }
    else{
     a[i][j]=1;
     a[i][j+1]=0;
     a[i+1][j]=0;
     a[i+1][j+1]=1;
     
    }
   }
  }
  
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    cout<<a[i][j]<<" ";
   }
   cout<<endl;
  }
 }
 return 0;
}