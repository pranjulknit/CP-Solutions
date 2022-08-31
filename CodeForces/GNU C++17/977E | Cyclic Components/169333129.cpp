// Problem: E. Cyclic Components
// Contest: Codeforces - Codeforces Round #479 (Div. 3)
// URL: https://codeforces.com/contest/977/problem/E
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
 
 
vector<vector<ll> > adj(n);
 
vector<bool> vis(n,false);
 
bool isCycle = false;
 
void dfs(ll u){
 
 vis[u] = true;
 if(adj[u].size()!=2){
  isCycle = false;
 }
 for(auto v:adj[u]){
  if(!vis[v]){
   dfs(v);
    
  
  }
 }
 
 
 
}
 
 
 
 
 
 
int main(){
 
 
 cin>>n>>m;
 
 
 for(ll i=0;i<m;i++){
  ll u,v;
  cin>>u>>v;
  
  adj[u].pb(v);
  adj[v].pb(u);
  
  
  
 }
 
 ll ans = 0;
 for(ll i=1;i<=n;i++){
  
  if(!vis[i]){
   isCycle= true;
   dfs(i);
   if(isCycle)
   ans++;
  }
 }
 
 cout<<ans<<endl;
 
 adj.clear();
 vis.clear();
 return 0;
}
 
 
 
 
 
 
 
 