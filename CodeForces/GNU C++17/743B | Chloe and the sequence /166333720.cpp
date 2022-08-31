// Problem: B. Chloe and the sequence
// Contest: Codeforces - Codeforces Round #384 (Div. 2)
// URL: https://codeforces.com/problemset/problem/743/B
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
#define line cout<<"line"<<endl
//power of large number
 
 
 
 
int main(){
 ll n,k;
 cin>>n>>k;
 
 ll siz = 1;
 
 for(ll i=1;i<n;i++){
  siz = siz*2ll + 1ll;
 }
 
 ll low = 1;
 ll high = siz;
 
 while(low<=high){
  ll mid = low + (high -low)/2;
  
  if(mid==k){
   //cout<<n<<endl;
   break;
  }
  else if(mid>k){
   high = mid-1;
   n--;
  }
  else{
   low = mid+1;
   n--;
  }
 }
 cout<<n<<endl;
 
 
 
 return 0;
}