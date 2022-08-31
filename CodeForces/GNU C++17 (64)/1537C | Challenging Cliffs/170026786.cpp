// Problem: C. Challenging Cliffs
// Contest: Codeforces - Codeforces Round #726 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1537/C
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
  
  sort(all(v));
  
  if(n==2){
   for(ll i=0;i<n;i++){
   cout<<v[i]<<" ";
  }
  cout<<endl;
  continue;
  }
  
  vector<ll> ans(n);
  ll index=-1;
  ll mn  = INT_MAX;
  for(ll i=0;i<n-1;i++){
   if(mn > abs(v[i]-v[i+1])){
    index = i+1;
    mn = abs(v[i]-v[i+1]);
    
   }
  }
  
  
  
  ll j=0;
  for(ll i=index;i<n;i++){
   ans[j] = v[i];
   j++;
  }
  
  for(ll i=0;i<index;i++){
   ans[j] = v[i];
   j++;
  }
  
  
  for(auto x:ans){
   cout<<x<<" ";
  }
  
  cout<<endl;
  
 }
 
 
 
 
 
 return 0;
}