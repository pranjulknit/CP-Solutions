// Problem: B. Two Tables
// Contest: Codeforces - Educational Codeforces Round 112 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1555/problem/B
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
 
 ll t;cin>>t;
 
 
 
 while(t--){
  ll rmw,rmh;
  cin>>rmw>>rmh;
  
  ll w1,w2,h1,h2;
  cin>>w1>>h1>>w2>>h2;
  
  ll w,h;
  cin>>w>>h;
  ll ans = INT_MAX;
  if(w2-w1+w<=rmw)
  ans  = min(ans,min(max(0ll,w-w1),max(0ll,w2-(rmw-w))));
  
  if(h2-h1+h<=rmh)
  ans = min(ans,min(max(0ll,h2-(rmh-h)),max(0ll,h-h1)));
  
  if(ans == INT_MAX){
   cout<<-1<<endl;
  }
  else{
   cout<<fixed<<setprecision(6)<<(double)ans<<endl;
  }
 
 }
 
 
 return 0;
}