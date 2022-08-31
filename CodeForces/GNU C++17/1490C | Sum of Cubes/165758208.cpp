// Problem: C. Sum of Cubes
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/C
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
 
 
 
 ll func(ll low,ll mid){
  
  return low*low*low+mid*mid*mid;
 }
 
 int main(){
  
  ll t;
  cin>>t;
  
  while(t--){
   
   ll x;
   cin>>x;
   
   ll low = 1;
   ll high = 100000;
   bool yes=false;
   while(low<=high){
    ll fun  = func(low,high);
    if(fun==x){
     yes  = true;
     break;
    }
    else if(fun>x){
     high--;
    }
    else{
     low++;
    }
   }
   
   if(yes){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
  }
  
  
  
  return 0;
 }