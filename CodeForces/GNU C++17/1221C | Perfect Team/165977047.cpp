// Problem: C. Perfect Team
// Contest: Codeforces - Educational Codeforces Round 73 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1221/C
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
 
 
 
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll a,b,res;
  cin>>a>>b>>res;
  
  ll mn = min(a,b);
  ll mx = max(a,b);
  
  
   if(mx+res>=2*mn){
    cout<<mn<<endl;
   }
      else{
       cout<<(mx+mn+res)/3<<endl;
      }
  
 }
 
 
 return 0;
}