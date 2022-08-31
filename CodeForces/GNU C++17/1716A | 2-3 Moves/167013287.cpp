// Problem: A. 2-3 Moves
// Contest: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1716/problem/A
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
 
 
 
 
 
int main(){
 
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n;
  cin>>n;
  if(n==1){
   cout<<2<<endl;
   continue;
  }
  if(n==2){
   cout<<1<<endl;
   continue;
  }
  
  if(n%3==0){
   cout<<n/3<<endl;continue;
  }
  
  if(n%3 ==2){
  cout<<n/3 + 1<<endl;
  continue;
  }
  
  
  
  if(n%3==1){
   cout<<(n/3) -1 + 2<<endl;
  }
  
 }
 
 
 return 0;
}