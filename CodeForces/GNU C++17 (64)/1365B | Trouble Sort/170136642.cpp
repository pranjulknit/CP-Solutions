// Problem: B. Trouble Sort
// Contest: Codeforces - Codeforces Round #648 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1365/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
 
 ll t;
 cin>>t;
 
 
 
 while(t--){
  ll n;
  cin>>n;
  
  
  vector<ll> a(n),b(n);
  
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  bool one  = false;
  bool zero = false;
  for(ll i=0;i<n;i++){
   cin>>b[i];
   if(b[i]==0){
    zero = true;
   }
   if(b[i]==1){
    one = true;
   }
  }
  
  bool no =false;
  for(ll i=0;i<n-1;i++){
   if(a[i]<=a[i+1]){
    continue;
   }
   else{
    no = true;
   }
  }
  
  if(!no){
   cout<<"Yes"<<endl;
   
  }
  else if(no and one and zero){
   cout<<"Yes"<<endl;
  }else{
   cout<<"No"<<endl;
  }
  
 
 }
 
 
 
 
 
 return 0;
}