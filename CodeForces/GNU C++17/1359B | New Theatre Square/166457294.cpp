// Problem: B. New Theatre Square
// Contest: Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1359/B
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
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,m,x,y;
  cin>>n>>m>>x>>y;
  
  char c[n][m];
  ll cntdot = 0;
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    cin>>c[i][j];
    if(c[i][j]=='.')
    cntdot++;
   }
  }
  
  
  if(2*x<=y){
   cout<<x*cntdot<<endl;
  }
  else{
   ll cost = 0;
   for(ll i=0;i<n;i++){
    ll cnt2 = 0;
    ll cnt1 = 0;
    for(ll j=0;j<m;j++){
     if( j+1<m and  c[i][j]=='.' and c[i][j]==c[i][j+1] ){
      cnt2++;
      j++;
     }
     else if(c[i][j]=='.'){
      cnt1++;
     }
    }
    //cout<<cnt2<<endl;
    cost += y*cnt2;
    
    cost+= x*cnt1;
   //cout<<cost<<endl;
    
   }
   
   cout<<cost<<endl;
  }
 }
 
 
 
 return 0;
}