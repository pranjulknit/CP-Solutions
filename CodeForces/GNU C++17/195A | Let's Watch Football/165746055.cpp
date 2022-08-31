// Problem: A. Let's Watch Football
// Contest: Codeforces - Codeforces Round #123 (Div. 2)
// URL: https://codeforces.com/problemset/problem/195/A
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
 
 ll func(ll &mid,ll all,ll b,ll a){
  
  return all*b>=(all-mid)*a;
 }
 
 
 
 int main(){
    
    ll a,b,c;
    
    cin>>a>>b>>c;
    
    ll all = (a*c+b-1)/b;
     //cout<<all<<endl;
    
    ll low = 1;
    ll high = all;
    ll ans = high;
    while(low<=high){
     
     ll mid = low + (high-low)/2;
     
     //cout<<mid<<endl;
     if(func(mid,all,b,a)){
      ans = mid;
         high = mid-1;
     }
     else{
      low = mid+1;
     }
    }
    
    cout<<ans<<endl;
  
  return 0;
 }