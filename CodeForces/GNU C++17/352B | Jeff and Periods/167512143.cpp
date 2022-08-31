// Problem: B. Jeff and Periods
// Contest: Codeforces - Codeforces Round #204 (Div. 2)
// URL: https://codeforces.com/problemset/problem/352/B
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
 
 
 
 ll n;
 
 cin>>n;
 
 vector<ll> v(n);
 
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 ll last[100001]={0};
 ll cd[100001]={0};
 
 
 for(ll i=0;i<n;i++){
  if(last[v[i]]==0){
   //cout<<last[v[i]]<<" "<<v[i]<<endl;
   last[v[i]] = i+1;
  }
  else if(last[v[i]]!=0 and last[v[i]]!=-1){
   ll temp = i+1 - last[v[i]];
   
   if(cd[v[i]]==0 or cd[v[i]]==temp){
    cd[v[i]] = temp;
    last[v[i]] = i+1;
   }else{
    last[v[i]]=-1;
   }
  }
  
 }
 
 // cout<<last[2]<<endl;
 // cout<<cd[2]<<endl;
 
 vector<pll> ans;
 for(ll i=1;i<=100000;i++){
  if(last[i]>0){
   ans.pb({i,cd[i]});
  }
 }
 
 cout<<ans.size()<<endl;
 
 
 for(auto &x:ans){
  cout<<x.first<<" "<<x.second<<endl;
 }
 
 return 0;
}