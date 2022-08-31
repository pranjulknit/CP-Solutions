// Problem: B. Fence
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
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
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0)
 
using namespace std;
 
 
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(a==0 or b==0)return 0;if(b%a==0){return a;}gcd(b%a,b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
#define MX  30009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
 
 
 
 
int main(){
 
 ll n,k;
 cin>>n>>k;
 
 vector<ll> v(n);
 
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 
 ll window  = 0;
 
 for(ll i=0;i<k;i++){
  window+=v[i];
 }
 ll mn = window;
 ll ans=0;
 ll p=0;
 for(ll i=k;i<n;i++){
 
  
  window-=v[p];
  window+=v[i];
  p++;
   //cout<<window<<endl;
  if(window<mn){
   //line;
   ans = p;
   window= mn;
  }
 }
 
 
 cout<<ans+1<<endl;
 return 0;
}