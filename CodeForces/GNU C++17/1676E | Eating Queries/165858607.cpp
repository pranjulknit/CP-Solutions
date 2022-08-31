// Problem: E. Eating Queries
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/E
// Memory Limit: 256 MB
// Time Limit: 3500 ms
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
inline bool comprev(ll &a,ll &b){return a>b;}
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,q;
  cin>>n>>q;
  
  
  vector<ll> v(n);
  vector<ll> prefix(n+1,0);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
   prefix[i+1] = prefix[i]+v[i];
  }
  sort(v.begin(),v.end(),comprev);
  for(ll i=0;i<n;i++){
  
   prefix[i+1] = prefix[i]+v[i];
  }
  
  
  // for(auto x:prefix){
   // cout<<x<<" ";
  // }
  //cout<<endl;
  while(q--){
   ll x;
   cin>>x;
   
   if(x<=prefix[1]){
    cout<<1<<endl;
    continue;
   }
   if(x>prefix[n]){
    cout<<-1<<endl;
    continue;
   }
   // ll low = 0;
   // ll high = n;
//    
   ll index = upper_bound(all(prefix),x)-prefix.begin();
   
    if(prefix[index-1]==x){
     cout<<index-1<<endl;
     continue;
    }
   
   cout<<index<<endl;
  }
 }
 
 return 0;
}