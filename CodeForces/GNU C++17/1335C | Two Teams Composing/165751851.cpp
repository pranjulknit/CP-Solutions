// Problem: C. Two Teams Composing
// Contest: Codeforces - Codeforces Round #634 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1335/C
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
 
 
 
 int main(){
  ll t;
  cin>>t;
  
  while(t--){
   ll n;cin>>n;
   
   vector<ll> v(n);
   map<ll,ll>mp;
   ll mxfreq = 1;
   for(ll i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
      mxfreq = max(mxfreq,mp[v[i]]);
   }
   
   ll dist = mp.size();
   if(n==1){
    cout<<0<<endl;
    continue;
   }
   
   
   ll can1 = min(dist-1,mxfreq);
   ll can2 = min(dist,mxfreq-1);
   
   cout<<max(can1,can2)<<endl;
   
  }
  
  
  
  
  
  return 0;
 }