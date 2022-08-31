// Problem: C. Dolce Vita
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1671/C
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
 
 
#define line cout<<"this line"<<endl
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll n,x;
  cin>>n>>x;
  
  vector<ll> v(n),prefix(n+1,0);
  
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  sort(all(v));
  for(ll i=0;i<n;i++){
   prefix[i+1] = prefix[i]+v[i];
  }
  
  if(x<prefix[1]){
   cout<<0<<endl;
   continue;
  }
  if(x==prefix[1]){
   cout<<1<<endl;
   continue;
  }
  
  ll ans = 0;
  for(ll i=1;i<=n;i++){
   //cout<<((prefix[i]-1)/i + 1)<<endl;
   //cout<<((x-prefix[i]-1)/i + 1)<<endl;
   //cout<<prefix[i]<<endl;
   if(prefix[i]<=x)
   ans += ((x-prefix[i])/i + 1);
   else{
    break;
   }
  }
  
  cout<<ans<<endl;
 }
 
 
 return 0;
}