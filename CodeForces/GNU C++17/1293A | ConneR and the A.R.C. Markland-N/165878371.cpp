// Problem: A. ConneR and the A.R.C. Markland-N
// Contest: Codeforces - Codeforces Round #614 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1293/A
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
 
 
int main(){
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,s,k;
  cin>>n>>s>>k;
  
  vector<ll> v(k);
  //vector<ll> check;
  map<ll,ll> mp;
  for(ll i=0;i<k;i++){
   cin>>v[i];
   mp[v[i]]++;
  }
  
  //cout<<mp[2]<<endl;
  
  for(ll i=0;i<=k;i++){
   if(s-i>=1 and mp[s-i]== 0){
    cout<<i<<endl;
    break;
   }
   if(s+i<=n and mp[s+i] == 0){
    cout<<i<<endl;
    break;
   }
  }
   
 }
 
 
 
 return 0;
}