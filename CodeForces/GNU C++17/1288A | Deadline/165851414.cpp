// Problem: A. Deadline
// Contest: Codeforces - Educational Codeforces Round 80 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1288/A
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
 
 ll func(ll mid,ll d){
  //mid++;
  
  return  (ll)ceil(d*1.0/(double)(mid+1)) + mid;
 }
 
 
 
 
 
 
 int main(){
  ll t;
  cin>>t;
  
  
  while(t--){
   ll n,d;
   cin>>n>>d;
   
   if(d<=n){
    cout<<"YES"<<endl;
   }
   else{
    
    ll low = 1;
    
    ll high = n;
    
    bool yes = false;
    while(low<=high){
     
     ll mid = low + (high -low)/2;
     //cout<<mid<<endl;
     // mid++;
     // cout<<((n+mid-1)/mid )+ mid-1<<endl;
     ll fun = func(mid,d);
     ll fun2 = fun;
     if(mid>1)
     fun2 = func(mid-1,d);
     //cout<<fun<<endl;
     if(fun<=n or fun2<=n){
      //cout<<fun<<endl;
      yes = true;
      break;
     }
     else if(fun>n){
      high = mid-1;
     }
    }
    
    
    if(yes){
     cout<<"YES"<<endl;
     
    }else{
     cout<<"NO"<<endl;
    }
   }
  }
  
  
  return 0;
 }