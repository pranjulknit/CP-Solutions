// Problem: B. Megacity
// Contest: Codeforces - Codeforces Round #242 (Div. 2)
// URL: https://codeforces.com/contest/424/problem/B
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
#define line cout<<"line"<<endl
//power of large number
 
 
 
 
 
int  main(){
 ll n,s;
 
 cin>>n>>s;
 
 vector<pair<double,ll>> v;
 
 for(ll i=0;i<n;i++){
  ll a,b,c;
  cin>>a>>b>>c;
     
     double dist = sqrt(b*b + a*a);
     
     v.pb({dist,c});
 }
 
 sort(all(v));
 
 // for(auto x:v){
  // cout<<x.first<<" "<<x.second<<endl;
 // }
 
 for(ll i=0;i<n;i++){
  s+= v[i].second;
  
  if(s>=1000000){
   cout<<fixed<<setprecision(6)<<v[i].first<<endl;
   return 0;
  }
 }
 
 cout<<-1<<endl;
 
 return 0;
}