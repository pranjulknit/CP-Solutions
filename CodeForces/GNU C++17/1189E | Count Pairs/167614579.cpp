// Problem: E. Count Pairs
// Contest: Codeforces - Codeforces Round #572 (Div. 2)
// URL: https://codeforces.com/contest/1189/problem/E
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
 
ll powermod(ll a,ll b,ll mod)
{
 ll res = 1;
 
 while(b){
  
  if(b&1){
   res = (res*a)%mod;
  }
  a = (a*a)%mod;
  
  b= b>>1;
 }
 
 return res;
}
 
 
 
int main(){
 
 ll p,n,k;
 
 cin>>n>>p>>k;
 
 vector<ll> v(n);
 
 map<ll,ll> mp;
 for(ll i=0;i<n;i++)
 {
  cin>>v[i];
  
 }
 ll ans= 0;
 for(ll i=0;i<n;i++){
  ll check = ((powermod(v[i],4,p)- ((k)*(v[i]))%p)+p-1)%p;
  
  
   ans += mp[check];
  
  
  mp[check]++;
 }
 cout<<ans<<endl;
 return 0;
}