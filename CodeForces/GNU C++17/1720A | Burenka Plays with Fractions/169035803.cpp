// Problem: A. Burenka Plays with Fractions
// Contest: Codeforces - Codeforces Round #815 (Div. 2)
// URL: https://codeforces.com/contest/1720/problem/A
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
 
 
 
 ll t;cin>>t;
 
 
 while(t--){
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  //cout<<a<<" "<<b<<" "<<c<<" "<<d;
  
  ll x = a*d;
  ll y = b*c;
  
  
  
  if(x==y){
   cout<<0<<endl;
   continue;
  }
  
  //cout<<a<<" "<<b<<" "<<c<<" "<<d;
  
  
  if(y!=0 and x%y==0){
   cout<<1<<endl;
  }
  else if(x!=0 and y%x==0){
   cout<<1<<endl;
  }
  else{
   cout<<2<<endl;
  }
  
 }
 
 
 return 0;
}