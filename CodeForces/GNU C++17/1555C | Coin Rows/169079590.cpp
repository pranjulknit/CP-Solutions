// Problem: C. Coin Rows
// Contest: Codeforces - Educational Codeforces Round 112 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1555/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define endl "\n"
#define pll pair<ll,ll>
 
#define pb push_back
#define all(x) x.begin(),x.end()
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0)
 
using namespace std;
 
 
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(a==0 or b==0)return 0;if(b%a==0){return a;}gcd(b%a,b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
#define ff first
#define ss second
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
   while(t--){
    ll m;
    cin>>m;
    
    
    vector<vector<ll>> v(2,vector<ll>(m));
    ll allsum=0;
    for(ll i=0;i<2;i++){
     for(ll j=0;j<m;j++){
      cin>>v[i][j];
      allsum += v[i][j];
     }
    }
    
    vector<ll> suffix1(m+1,0);
    vector<ll> suffix2(m+1,0);
    
    for(ll i=m-1;i>=0;i--){
     suffix1[i]  = suffix1[i+1]+v[0][i];
     suffix2[i] = suffix2[i+1]+v[1][i];
    }
    
     // for(ll i=m-1;i>=0;i--){
     // cout<<suffix2[i]<<" ";
    // }
    //cout<<endl;
    
    vector<ll> prefix1(m+1,0);
    vector<ll> prefix2(m+1,0);
    
    for(ll i=0;i<m;i++){
     prefix1[i+1]  = prefix1[i]+v[0][i];
     prefix2[i+1] = prefix2[i]+v[1][i];
    }
    prefix2[0] = INT_MIN;
     suffix1[m] = INT_MIN;
    // for(ll i=0;i<m;i++){
     // cout<<prefix1[i+1]<<" ";
    // }
    // cout<<endl;
    
    
    ll mn = INT_MAX;
  // ll mx = INT_MIN;
    for(ll i=0;i<m;i++){
     //cout<<prefix2[i]<<" "<<suffix1[i+1]<<endl;
     mn = min(mn,max(prefix2[i],suffix1[i+1]));
    }
   
   
   cout<<max(0ll,mn)<<endl;
   
   
   
   }
 
 
 
 return 0;
}