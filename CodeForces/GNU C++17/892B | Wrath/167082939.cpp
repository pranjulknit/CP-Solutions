// Problem: B. Wrath
// Contest: Codeforces - Codeforces Round #446 (Div. 2)
// URL: https://codeforces.com/problemset/problem/892/B
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
#define alli(x,k) x.begin()+k,x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
#define line cout<<"line"<<endl
//power of large number
 
 
 
 
 
int main(){
 
 
 ll n;
 cin>>n;
 
 vector<ll> v(n);
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 ll mn = n;
 ll cnt = 0;
 for(ll i=n-1;i>=0;i--){
  if(i<mn){
   cnt++;
  }
  
  mn  = min(mn,i-v[i]);
 }
 cout<<cnt<<endl;
 
 return 0;
}