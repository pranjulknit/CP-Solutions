// Problem: A. Design Tutorial: Learn from Math
// Contest: Codeforces - Codeforces Round #270
// URL: https://codeforces.com/problemset/problem/472/A
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
#define alli(x,k) x.begin()+k,x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
#define line cout<<"line"<<endl
//power of large number
 
 
bool isprime(ll n){
 
 for(ll i=2;i*i<=n;i++){
  if(n%i==0){
   return false;
  }
 }
 
 return true;
}
 
 
int main(){
 
 ll n;
 cin>>n;
 
 for(ll i=4;i<=1100000;i+=4){
  if(!isprime(n-i)){
    cout<<i<<" "<<n-i<<endl;
    return 0;
  }
 }
 
 for(ll i=6;i<=1100000;i+=6){
  if(!isprime(n-i)){
    cout<<i<<" "<<n-i<<endl;
    return 0;
  }
 }
 
 return 0;
}