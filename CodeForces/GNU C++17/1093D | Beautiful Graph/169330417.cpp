// Problem: D. Beautiful Graph
// Contest: Codeforces - Educational Codeforces Round 56 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1093/D
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
 
ll mod = 998244353;
 
ll n=300005,m= 300005;
 
 
vector<vector<ll>> adj;
vector<bool> vis;
vector<ll> col;
 
ll c0,c1;
bool dfs(ll u){
 
 vis[u] = true;
 
 
 for(auto v:adj[u]){
  
  if(col[v]==col[u]){
   return false;
  }
  else if(!vis[v]){
   col[v] = !col[u];
   
   if(col[v]==1){
    c1++;
   }
   else{
    c0++;
   }
   if(!dfs(v)){
    return false;
   }
  }
 }
 
 
 return true;
}
 
 
 
 
 
int main(){
 ll t;
 cin>>t;
 
 
 while(t--){
  cin>>n>>m;
 adj.clear();
 vis.clear();
 col.clear();
 adj.resize(n+1);
 vis.resize(n+1,false);
 col.resize(n+1,-1);
 
 for(ll i=0;i<m;i++){
  ll u,v;
  cin>>u>>v;
  
  adj[u].pb(v);
  adj[v].pb(u);
  
  
 }
 ll power[n+1]={0};
 power[0]=1;
 for(ll i=1;i<=n;i++){
  power[i] = (power[i-1]*2)%mod;
 }
 
 
 ll ans = 1;
 for(ll i=1;i<=n;i++){
  
  if(!vis[i]){
   c0=1,c1=0;
   col[i]=0;
   if(!dfs(i)){
    ans = 0;
    break;
   }
   else{
    //cout<<c0<<" "<<c1<<endl;
     ans  = ((ans%mod) *(ll)(power[c0]+power[c1])%mod)%mod;
   }
  }
 }
 
 cout<<ans<<endl;
 
 }
 
 
 return 0;
}