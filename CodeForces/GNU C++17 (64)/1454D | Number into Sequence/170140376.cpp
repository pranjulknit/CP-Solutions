// Problem: D. Number into Sequence
// Contest: Codeforces - Codeforces Round #686 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1454/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
 
 
 
bool comp(pll &a,pll &b){
 
 if(a.first>=b.first){
  return true;
 }
 
 return false;
}
 
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 
 while(t--){
  ll n;
  cin>>n;
  ll temp = n;
  vector<ll> ans;
  vector<pll> div;
  for(ll p=2;p*p<=n;p++){
   
   if(n%p==0){
    
    ll cnt=0;
    while(n%p==0){
     
     n/=p;
     cnt++;
    }
    div.pb({cnt,p});
   }
  }
  
  
  if(n!=1){
   div.pb({1,n});
  }
 
 n= temp;
 sort(all(div),comp);
 while(n%div[0].second==0 and (n/div[0].second)%div[0].second==0){
  ans.pb(div[0].second);
  n/=div[0].second;
 }
 if(n!=1){
  ans.pb(n);
 }
 cout<<ans.size()<<endl;
 for(auto x:ans){
  cout<<x<<" ";
 }
 cout<<endl;
 }
 
 return 0;
}