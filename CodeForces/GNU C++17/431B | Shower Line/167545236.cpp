// Problem: B. Shower Line
// Contest: Codeforces - Codeforces Round #247 (Div. 2)
// URL: https://codeforces.com/problemset/problem/431/B
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
#define alli(x,k) x.begin()+k,x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
#define line cout<<"line"<<endl
//power of large number
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
 
 
 
 
 ll n,m;
    n=5;
    m=5;
 
 
 vector<vector<ll>> v(n+1,vector<ll> (m+1));
 
 
 for(ll i=1;i<=n;i++){
  for(ll j=1;j<=m;j++){
   
   cin>>v[i][j];
  }
 }
 
    vector<ll>  check = {1,2,3,4,5};
    ll ans = 0;
 do{
ans = max(ans, 2*(v[check[4]][check[3]] +v[check[3]][check[4]])+ 
       2*(v[check[2]][check[3]] + v[check[3]][check[2]]) 
  +(v[check[1]][check[0]]+v[check[0]][check[1]])
  +(v[check[1]][check[2]] +v[check[2]][check[1]]));
 }
 while(next_permutation(check.begin(),check.end()));
 
      cout<<ans<<endl;
 
 return 0;
}