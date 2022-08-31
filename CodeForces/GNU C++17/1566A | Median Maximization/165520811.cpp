// Problem: A. Median Maximization
// Contest: Codeforces - Codeforces Global Round 16
// URL: https://codeforces.com/problemset/problem/1566/A
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
#define pb push_back
 
 
 
using namespace std;
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
 
 ll form(ll n){
  
  return n*(n+1)/2;
 }
 
 
 int main(){
  ll t;
  cin>>t;
  
  
  while(t--){
   ll n,k;
   cin>>n>>k;
   if(n==1){
    cout<<k<<endl;
    continue;
   }
   
   
   
   cout<<k/(n/2 + 1)<<endl;
   
  }
  
  
  return 0;
 }