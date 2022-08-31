// Problem: B. Queue at the School
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
#define MX  10000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
int main(){
 
 
 
 ll n;
 ll time;
 cin>>n>>time;
 
 
 string s;
 cin>>s;
 while(time--){
 for(ll i=0;i<n-1;i++){
  if(s[i]=='B' and s[i+1]=='G'){
   swap(s[i],s[i+1]);
   i++;
   
  }
 }
 
 }
 
 cout<<s<<endl;
 
 
 return 0;
}