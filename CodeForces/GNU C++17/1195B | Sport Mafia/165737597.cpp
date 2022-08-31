// Problem: B. Sport Mafia
// Contest: Codeforces - Codeforces Round #574 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1195/B
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
#define pb push_back
#define all(x) x.begin(),x.end()
 
 
using namespace std;
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
 
 ll func(ll &mid,ll n){
  
  return form(mid)-(n-mid);
 }
 
 
 int main(){
  
  ll n,k;
  cin>>n>>k;
  
  ll check = n;
  //cout<<check<<endl;
  ll ans= 0;
  
  
  ll low = 1;
  ll high = n;
  
  while(low<=high){
   ll mid = low + (high-low)/2;
   ll fun = func(mid,n);
   if(fun==k){
    ans= n-mid;
    break;
   }
   else if(fun>k){
    high = mid-1;
   }
   else{
    low = mid+1;
   }
  }
  cout<<ans<<endl;
  
  return 0;
 }