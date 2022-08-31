// Problem: A. Insomnia cure
// Contest: Codeforces - Codeforces Round #105 (Div. 2)
// URL: https://codeforces.com/contest/148/problem/A
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
inline ll gcd(ll a,ll b){if(a==0 or b==0)return 0;if(b%a==0){return a;}gcd(b%a,b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
int main(){
 
 
 
 ll k,l,m,n,d;
 
 cin>>k>>l>>m>>n>>d;
 
 vector<ll> v(d+1,0);
 
 for(ll i=k;i<=d;i+=k){
  v[i] = 1;
 }
 
 for(ll i=l;i<=d;i+=l){
  v[i] = 1;
 }
 
 for(ll i=m;i<=d;i+=m){
  v[i] = 1;
 }
 
 
 for(ll i=n;i<=d;i+=n){
  v[i] = 1;
 }
 
 ll cnt=0;
 for(ll i=1;i<=d;i++){
  if(v[i]==1){
   cnt++;
  }
 }
 
 cout<<cnt<<endl;
 
 return 0;
}