// Problem: B. Two Cakes
// Contest: Codeforces - Educational Codeforces Round 35 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/911/B
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
 
 
#define line cout<<"this line"<<endl
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
 
int main(){
 
 ll n,a,b;
 cin>>n>>a>>b;
 ll loop = min(a,b);
 
 ll ans = 0;
 for(ll i=1;i<n;i++){
 //line;
    
  ans = max(ans,min(a/i,b/(n-i)));
 }
 cout<<ans<<endl;
 
 return 0;
}