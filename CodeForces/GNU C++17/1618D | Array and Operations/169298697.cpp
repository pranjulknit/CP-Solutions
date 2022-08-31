// Problem: D. Array and Operations
// Contest: Codeforces - Codeforces Round #760 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1618/D
// Memory Limit: 512 MB
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
  ll n,k;
  cin>>n>>k;
  
  vector<ll> v(n);
  map<ll,ll> mp;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   
   mp[v[i]]++;
  }
  
  sort(all(v));
  
  ll ans= 0;
 
        
        ll temp = k;
       for(ll i=n-1;i>=0 and temp>0;i--){
           v[i-k]/=v[i];
           v[i]=0;
           temp--;
       }
  
  //cout<<temp<<endl;
  
  // for(auto &x:v){
   // cout<<x<<" ";
  // }
  // cout<<endl;
  
  for(ll i=0;i<n;i++){
   ans+=v[i];
  }
 
  
  cout<<ans<<endl;
 }
 
 
 
 
 return 0;
}