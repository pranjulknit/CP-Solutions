// Problem: A. Benches
// Contest: Codeforces - Codeforces Round #510 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1042/A
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
 
 
using namespace std;
 
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
 
int main(){
 ll n;
 cin>>n;
 
 ll m;
 cin>>m;
 
 vector<ll> v(n);
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 sort(v.begin(),v.end());
 
 ll temp = m;
 
 min_heap<ll> mnHeap;
 
 for(ll i=0;i<n;i++){
  mnHeap.push(v[i]);
 }
 ll check;
 while(temp!=0){
  check = mnHeap.top();
  mnHeap.pop();
  check++;
  temp--;
  mnHeap.push(check);
  
 }
 vector<ll> mn;
 while(!mnHeap.empty()){
  
 mn.pb(mnHeap.top());
 mnHeap.pop();
 }
 
 cout<<mn[n-1]<<" ";
 cout<<m+v[n-1]<<endl;
 return 0;
}