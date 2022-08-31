// Problem: A. Strange Birthday Party
// Contest: Codeforces - Codeforces Round #694 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1470/A
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
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
 
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
 
 
 
 
 
int main(){
 ll t;
 
 cin>>t;
 
 while(t--){
  ll n,m;
  cin>>n>>m;
  
  vector<ll> a(n),b(m);
  
  
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll j=0;j<m;j++){
   cin>>b[j];
  }
  // jo bhi maximum de skte hai for every i
  
  sort(all(a));
  vector<ll> given(n);
  
  for(ll i=0;i<n;i++){
   given[i] = b[a[i]-1];
  }
  
  ll j=0;
  ll ans = 0;
  for(ll i=n-1;i>=0;i--){
   if(b[j]<given[i]){
    ans += b[j];
    j++;
   }
   else{
    ans+=given[i];
   }
  }
  
  
  cout<<ans<<endl;
 }
 
 return 0;
}