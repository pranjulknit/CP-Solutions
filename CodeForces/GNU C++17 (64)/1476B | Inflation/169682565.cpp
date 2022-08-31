// Problem: B. Inflation
// Contest: Codeforces - Educational Codeforces Round 103 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1476/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define endl "\n"
#define pll pair<ll,ll>
 
#define pb push_back
#define all(x) x.begin(),x.end()
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0)
 
using namespace std;
 
 
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(a==0 or b==0)return 0;if(b%a==0){return a;}gcd(b%a,b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
#define ff first
#define ss second
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
bool check(ll mid,vector<ll> prefix,vector<ll> v,ll k){
 
 
 for(ll i=1;i<v.size();i++){
  if(v[i]*100ll <= k*(prefix[i]+mid)){
   
// cout<<v[i]*100<<" "<<k*(prefix[i]+mid)<<endl;
   continue;
  }
  else{
   return false;
  }
 }
     
   return true;
}
 
 
 
 
 
 
int main(){
 fast();
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,k;
  cin>>n>>k;
  
  
  vector<ll> v(n);
  
  vector<ll> prefix(n+1,0);
  for(ll i=0;i<n;i++){
   cin>>v[i];
   prefix[i+1] = prefix[i]+v[i];
  }
  
  
  
  
  ll low = 0;
  
  ll high = 100ll*1e9;
  ll ans= 0;
 // cout<<"fun"<<(bool)check(99,prefix,v,k);
  while(low<=high){
   
  ll mid = low+(high-low)/2;
 
  ll fun = check(mid,prefix,v,k);
  if(fun){
   
   ans= mid;
   high = mid-1;
  }
  else{
   low = mid+1;
  }
  }
  
  
 cout<<ans<<endl;
  
 }
}