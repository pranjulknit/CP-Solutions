// Problem: B. Optimal Reduction
// Contest: Codeforces - Codeforces Round #812 (Div. 2)
// URL: https://codeforces.com/contest/1713/problem/B
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
  ll n;
  cin>>n;
  
  
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
   
   
  }
  
  if(n<=2){
   cout<<"YES"<<endl;
   continue;
  }
  
  
  ll i=0;
  
  while(i+1<n and v[i]<=v[i+1]){
   i++;
  }
  while(i+1 <n and v[i]>=v[i+1]){
   i++;
  }
  
  if(i==n-1){
   cout<<"YES"<<endl;
   continue;
  }
  cout<<"NO"<<endl;
  
 }
 
 
 
 return 0;
}