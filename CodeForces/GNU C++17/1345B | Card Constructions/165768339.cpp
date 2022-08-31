// Problem: B. Card Constructions
// Contest: Codeforces - Codeforces Round #639 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1345/B
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
 
 
 ll func(ll x){
  return 2*form(x)+form(x-1);
 }
 
 
int main(){
 ll t;
 cin>>t;
 set<ll> set;
 for(ll i=1;i<=(100000);i++){
  set.insert(func(i));
 }
 
 // for(auto x:set){
  // cout<<x<<" ";
 // }
 //cout<<endl;
 //cout<<*set.lower_bound(14)<<endl;
 while(t--){
  ll n;
  cin>>n;
  if(n==1){
   cout<<0<<endl;
   continue;
  }
  //ll prev = -1;
  ll cnt= 0;
  while(1){
   
   
   auto it = set.upper_bound(n);
   it--;
   ll element = *it;
   cnt++;
   n-=element;
   if(n<=0 or n==1){
    break;
   }
  }
  
  cout<<cnt<<endl;
  
 }
 
 
 
 return 0;
}