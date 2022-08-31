// Problem: B. PolandBall and Game
// Contest: Codeforces - 8VC Venture Cup 2017 - Elimination Round
// URL: https://codeforces.com/problemset/problem/755/B
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
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
//power of large number
 
 
 
 
 
int main(){
 ll n,m;
 cin>>n>>m;
 
 vector<string> a(n),b(m);
 
 for(ll i=0;i<n;i++){
  cin>>a[i];
 }
 
 for(ll i=0;i<m;i++){
  cin>>b[i];
 }
 if(n>m){
  cout<<"YES"<<endl;
  return 0;
 }
 
 if(m>n){
  cout<<"NO"<<endl;
  return 0;
 }
 
 
 if(m==n){
  set<string>set;
  for(ll i=0;i<n;i++){
  set.insert(a[i]);
 }
 
 for(ll i=0;i<m;i++){
  set.insert(b[i]);
 }
 if(set.size()%2==1){
  cout<<"YES"<<endl;
 }else{
  cout<<"NO"<<endl;
 }
 
 
 }
 
 return 0;
}