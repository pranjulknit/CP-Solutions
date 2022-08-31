// Problem: A. Sushi for Two
// Contest: Codeforces - Codeforces Round #545 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1138/A
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
 
 int main(){
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  ll mx2,mx1;
  mx2 = mx1 = 0;
  vector<pll> index;
   for(ll i=0;i<n;i++){
    if(v[i]==2){
     mx2 = 0;
     ll j= i;
     while(v[j]==2){
      j++;
     }
     mx2  = max(mx2,j-i);
     i=j-1;
     index.pb({2,mx2});
    }
    else if(v[i]==1){
     mx1= 0;
     ll k= i;
     while(v[k]==1){
      k++;
     }
     
     mx1 = max(mx1,k-i);
     i=k-1;
     index.pb({1,mx1});
    }
   }
  
    ll mx= 0;
    
    // for(auto x:index){
     // cout<<x.first<<" "<<x.second<<endl;
    // }
   for(ll i=0;i<index.size()-1;i++){
    
       ll ans = min(index[i].second,index[i+1].second);
       
       mx = max(2*ans,mx);
       
   }
  
  cout<<mx<<endl;
  return 0;
 }
 
 