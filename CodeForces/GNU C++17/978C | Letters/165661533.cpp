// Problem: C. Letters
// Contest: Codeforces - Codeforces Round #481 (Div. 3)
// URL: https://codeforces.com/problemset/problem/978/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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
 
 
 
 
 int main(){
  
  ll n,k;
  cin>>n>>k;
  
  
  vector<ll> a(n);
  vector<ll> b(k);
  
  vector<ll> prefix(n+1,0);
  for(ll i=0;i<n;i++){
   cin>>a[i];
   prefix[i+1]=prefix[i]+a[i];
  }
  
  
  for(ll i=0;i<k;i++){
   cin>>b[i];
  }
  //sort()
 // bool loop = false;
  
  vector<pll> ans;
  
  for(ll i=0;i<k;i++){
   ll index = (lower_bound(all(prefix),b[i])-prefix.begin());
   ans.pb({index,b[i]-prefix[index-1]});
  }
  
  
  
  for(auto x:ans){
   cout<<x.first<<" "<<x.second<<endl;
  }
  
  return 0;
 }