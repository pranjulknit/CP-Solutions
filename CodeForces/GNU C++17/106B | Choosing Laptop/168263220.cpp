// Problem: B. Choosing Laptop
// Contest: Codeforces - Codeforces Beta Round #82 (Div. 2)
// URL: https://codeforces.com/problemset/problem/106/B
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
 
 
 ll n;
 
 cin>>n;
 
 vector<pair<ll,pair<pll ,pll>>> v(n);
 
 for(ll i=0;i<n;i++){
  ll speed,ram,hdd,cost;
  cin>>speed>>ram>>hdd>>cost;
  
  v[i].first = cost;
  v[i].ss.ff.ff = speed;
  v[i].ss.ff.ss = ram;
  v[i].ss.ss.ff = hdd;
  v[i].ss.ss.ss = i;
  
 }
 
 sort(all(v));
 ll ans=0;
 for(ll i=0;i<n;i++){
   
  ll speed2 = v[i].ss.ff.ff ;
  ll  ram2 = v[i].ss.ff.ss ;
  ll hdd2 = v[i].ss.ss.ff ;
   ll i2 = v[i].ss.ss.ss ;
   
   bool yes = false;
   
   
   for(ll j=0;j<n;j++){
    
    if(j==i){
     continue;
    }
    
    
  ll speed1 = v[j].ss.ff.ff ;
  ll  ram1 = v[j].ss.ff.ss ;
  ll hdd1 = v[j].ss.ss.ff ;
   ll i1 = v[j].ss.ss.ss ;
   
   if(speed2 < speed1 and ram2 < ram1 and hdd2< hdd1){
    
    yes = true;
    
   }
   
   
   }
   
   
   if(!yes){
    ans = i2+1;
    break;
   }
  
   
  
  
 }
 
 
 
 cout<<ans<<endl;
 
 return 0;
}