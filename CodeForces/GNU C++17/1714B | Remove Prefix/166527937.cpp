// Problem: B. Remove Prefix
// Contest: Codeforces - Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/B
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
 ll t;
 cin>>t;
 
 while(t--){
  
  ll n;
  cin>>n;
  
  
  vector<ll> v(n);
  
  
  for(ll i=n-1;i>=0;i--){
   
   cin>>v[i];
  }
  
  
     ll first = 0;
     
     map<ll,ll> mp;
     while(first<n){
      
      mp[v[first]]++;
      
      if(mp[v[first]]>1){
       break;
      }
      first++;
     }
     //cout<<first
     if(first<n)
     cout<<n-first<<endl;
     else{
      cout<<0<<endl;
     }
 }
 
 
 
 
 return 0;
}