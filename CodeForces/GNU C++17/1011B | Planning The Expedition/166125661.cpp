// Problem: B. Planning The Expedition
// Contest: Codeforces - Codeforces Round #499 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1011/B
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
#define line cout<<"line"<<endl
//power of large number
 
ll func(ll mid, map<ll,ll> mp){
 ll cnt  =0;
 auto temp = mp;
 // for(auto it:temp){
  // cout<<it.first<<" "<<it.second<<endl;
 // }
 for(auto it:temp){
  if(it.second>=mid)
  
  while(it.second>=mid){
 
   it.second -=mid;
    cnt++;
  }
 }
 //cout<<cnt<<endl;
 return cnt;
}
 
 
int main(){
 ll n,m;
 cin>>n>>m;
 
 vector<ll> v(m);
 
 map<ll,ll> mp;
 for(ll i=0;i<m;i++){
  cin>>v[i];
  mp[v[i]]++;
 }
 
 ll low = 1;
 ll high = m;// maxmday
 
 for(ll low = high;low>=1;low--){
  if(func(low,mp)>=n){
   cout<<low<<endl;
   return 0;
  }
 }
 
 cout<<0<<endl;
 
 return 0;
}