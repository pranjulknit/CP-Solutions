// Problem: C. Slay the Dragon
// Contest: Codeforces - Educational Codeforces Round 114 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1574/C
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
 fast();
 
 ll n;
 cin>>n;
 
 
 
 vector<ll> v(n);
 
 ll sum = 0;
 for(ll i=0;i<n;i++){
  cin>>v[i];
  sum+=v[i];
 }
 
 
 ll m;
 cin>>m;
 sort(all(v));
 while(m--){
  ll x,y;
  cin>>x>>y;
  
  
  // equal index ya usse bda dega
  ll index = lower_bound(all(v),x)-v.begin();
  
  ll need=0; // agr x bda hai sb heroes se
  ll check = 0;
  ll temp = 0;
  if(index==n){
   index--;
   // isme x bda hoga
   
   if(v[index]<x){
    need = x-v[index];
   }
   temp  = sum-v[index];
   
   if(temp<y){
    need += y-temp;
   }
   
   
  }
  else{
   //cout<<"lb "<<v[index]<<endl;
   if(v[index]<x){
    need  = x-v[index];
   }
   temp  = sum- v[index];
   
   if(temp<y){
    need += y-temp;
   }
   
  
   
   
   if(index>0){
    
    if(v[index-1]<x){
     check=x-v[index-1];
    }
    temp = sum-v[index-1];
    if(temp<y){
     check+=(y-(temp));
    }
    need = min(need,check);
   }
   //cout<<need<<" "<<check<<endl;
   
   
   
   
   }
   
   cout<<need<<endl;
   
  
 
 }
 
 return 0;
}