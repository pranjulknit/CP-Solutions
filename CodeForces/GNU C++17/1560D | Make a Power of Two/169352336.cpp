// Problem: D. Make a Power of Two
// Contest: Codeforces - Codeforces Round #739 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1560/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  string s;
  cin>>s;
  
  vector<string> v;
  for(ll i=0;i<=63;i++){
   v.pb(to_string((ll)(1ll<<i)));
   
  }
  
  
  
   
   
    ll mn = INT_MAX;
    for(auto x:v){
     ll i=0,j=0;
     ll k = 0;
     
     while(i<s.size() and j<x.size()){
      
      if(s[i]==x[j]){
       
       j++;
       k++;
      }
      i++;
     }
     
     mn = min(mn,max(0ll,s.size()+x.size()-2*k));
     
    }
    
    cout<<mn<<endl;
   
  
 }
 
}