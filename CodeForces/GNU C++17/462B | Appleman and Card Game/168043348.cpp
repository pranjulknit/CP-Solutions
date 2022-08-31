// Problem: B. Appleman and Card Game
// Contest: Codeforces - Codeforces Round #263 (Div. 2)
// URL: https://codeforces.com/problemset/problem/462/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
 
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
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
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
 
 
bool comp(pll &a,pll &b){
 
 if(a.first>b.first){
  return true;
 }
 return false;
}
 
 
 
 
 
 
int main(){
 
 
 ll n,k;
 
 cin>>n>>k;
 
 string s;
 cin>>s;
 
 vector<pll> v(26,{0,0});
 for(auto c:s){
  v[c-'A'].first+=1;
   v[c-'A'].second = c;
   //cout<<c-'A'<<endl;
 }
 
 sort(all(v),comp);
 ll ans =0;
 for(ll i=0;i<26;i++){
  //cout<<v[i].first<<endl;
  
  if(k>=v[i].first){
   k-=v[i].first;
   ans += v[i].first*v[i].first;
  }
  else if(k<v[i].first){
   
   ans += k*k;
    v[i].first-= k;
    k=0;
  }
 }
 cout<<ans<<endl;
 return 0;
}