// Problem: C. Three Parts of the Array
// Contest: Codeforces - Codeforces Round #498 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1006/C
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
#define all(x) x.begin(),x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
//power of large number
 
 
 
 
int main(){
 ll n;
 cin>>n;
 
 
 vector<ll> v(n),prefix(n+1,0),suffix(n+1,0);
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 
 for(ll i=0;i<n;i++){
  prefix[i+1] = prefix[i]+v[i];
  suffix[i+1] = suffix[i]+v[n-1-i];
 }
 
 
 ll ans = 0;
 for(ll i=1;i<=n;i++){
  ll index = (upper_bound(all(suffix),prefix[i]) - suffix.begin());
  //cout<<index<<endl;
  if(index -1<= n-i and prefix[i]== suffix[index-1]){
   //cout<<index<<endl;
   ans = prefix[i];
  }
 }
 
 cout<<ans<<endl;
 
 return 0;
}