// Problem: C. Word Game
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/C
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
  ll n;
  cin>>n;
  
  vector<string>a(n),b(n),c(n);
  
  map<string,ll> mp;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   mp[a[i]]++;
  }
  
  for(ll i=0;i<n;i++){
   cin>>b[i];
   mp[b[i]]++;
  }
  for(ll i=0;i<n;i++){
   cin>>c[i];
   mp[c[i]]++;
  }
  
  ll ans1 = 0;
  
  for(ll i=0;i<n;i++){
   if(mp[a[i]]==1){
    ans1+=3;
   }
   else if (mp[a[i]]==2){
    ans1+=1;
   }
  }
  ll ans2 =0;
  
  for(ll i=0;i<n;i++){
   if(mp[b[i]]==1){
    ans2+=3;
   }
   else if (mp[b[i]]==2){
    ans2+=1;
   }
  }
  ll ans3 =0;
  for(ll i=0;i<n;i++){
   if(mp[c[i]]==1){
    ans3+=3;
   }
   else if (mp[c[i]]==2){
    ans3+=1;
   }
  }
  
  cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
 }
 
 
 
 
 
 return 0;
}