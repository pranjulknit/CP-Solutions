// Problem: B. Nastia and a Good Array
// Contest: Codeforces - Codeforces Round #720 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1521/B
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
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  vector<vector<ll>> ans;
  for(ll i=0;i<n-1;i++){
   ll gc = __gcd(v[i],v[i+1]);
   
   if(gc!=1){
    ll mn = min(v[i],v[i+1]);
    
    if(mn==v[i]){
     v[i+1] = v[i]+1;
    }
    else if(mn==v[i+1]){
     
      if(i-1>=0){
       
       while(1){
        if(__gcd(v[i-1],v[i]) == 1 and __gcd(v[i],v[i+1]) == 1){
         break;
        }
        v[i]++;
       }
      }
      else{//cout<<v[i]<<endl;
       v[i] = v[i+1]+1;
      }     
    
    }
    vector<ll> check;
    
     check.pb(i+1);
     check.pb(i+2);
     check.pb(v[i]);
     check.pb(v[i+1]);
    
    
    ans.pb(check);
   }
  }
  
  cout<<ans.size()<<endl;
  
  
  for(ll i=0;i<ans.size();i++){
   
   for(ll j=0;j<4;j++){
    cout<<ans[i][j]<<" ";
   }
   cout<<endl;
  }
  
  
 }
}