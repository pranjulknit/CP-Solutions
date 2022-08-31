// Problem: B. Perfect Number
// Contest: Codeforces - Codeforces Round #460 (Div. 2)
// URL: https://codeforces.com/problemset/problem/919/B
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
 
 
using namespace std;
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
 
 ll digitSum(ll x){
  
  ll sum =0;
  
  while(x){
   sum += (x%10);
   x/=10;
   
  }
  
  return sum;
 }
 
 
 int main(){
  
  ll n;
  cin>>n;
  ll k=0;
  for(ll i=1;i<=30000000;i++){
   if(digitSum(i)==10){
    k++;
    if(k==n){
     cout<<i<<endl;
     break;
    }
   }
  }
  
  
  return 0;
 }