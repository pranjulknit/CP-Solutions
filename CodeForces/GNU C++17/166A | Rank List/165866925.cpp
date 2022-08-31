// Problem: A. Rank List
// Contest: Codeforces - Codeforces Round #113 (Div. 2)
// URL: https://codeforces.com/problemset/problem/166/A
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
 
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
 
        if (hash1 != hash2) {
            return hash1 ^ hash2;             
        }
         
        
          return hash1;
    }
};
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
 
 
 
 int main(){
  
  ll n,k;
  cin>>n>>k;
  pll v[n];
  //v.pb({100,100});
 // unordered_map<pll,ll,hash_pair> mp;
  for(ll i=0;i<n;i++){
   cin>>v[i].first>>v[i].second;
   v[i].first *=-1;
   //mp[{v[i].first,v[i].second}]++;
  }
  
  sort(v,v+n);
 
  cout<<count(v,v+n,v[k-1])<<endl;
  return 0;
 }