// Problem: C. Poisoned Dagger
// Contest: Codeforces - Educational Codeforces Round 118 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1613/C
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
//power of large number
 
 
bool func(ll mid,ll h,vector<ll>&v){
 ll ans = 0;
 ll k = mid;
 ll n = v.size();
 //cout<<endl;
 for(ll i=0;i<n;i++){
  
  if(i==n-1){
   if(ans+k>=h){
    return true;
   }
  }
  
  
  if( i+1<n and v[i+1]-v[i]>k){
   if(ans+k>=h){
    return true;
   }
   ans +=k;
  }
  else if(i+1 <n and v[i+1]-v[i]<=k){
   if(ans + v[i+1]-v[i]>=h){
    return true;
   }
   ans += v[i+1]-v[i];
  }
 }
 
 return false;
}
 
int main(){
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,m;
  cin>>n>>m;
  vector<ll> v(n);
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  ll low = 1;
  ll high = 1000000000000000000;
  ll ans =1;
  while(low<=high){
   ll mid = low + (high -low)/2;
   //cout<<mid<<endl;
   ll fun = func(mid,m,v);
   //cout<<fun<<endl;
   if(fun){
    ans = mid;
    high = mid-1;
   }
   else{
    low = mid+1;
   }
  }
  
  
  cout<<ans<<endl;
 }
 
 
 
 return 0;
}