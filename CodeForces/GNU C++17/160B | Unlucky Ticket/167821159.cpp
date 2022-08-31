// Problem: B. Unlucky Ticket
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/160/B
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
 
 
 
 
 
 
 
 
 
 
int main(){
 
 ll n;
 cin>>n;
 
 string s;
 cin>>s;
 
 string t1,t2;
 
 for(ll i=0;i<2*n;i++){
  if(i<n){
   t1.pb(s[i]);
  }
  else{
   t2.pb(s[i]);
  }
 }
 sort(all(t1));
 sort(all(t2));
 ll i=0;
 ll dec=0;
 ll inc =0;
 //cout<<t1<<" "<<t2<<endl;
 while(i<n and t1[i]>t2[i]){
  i++;
  dec=1;
 }
 
 while(i<n and t1[i]<t2[i]){
  i++;
  inc=1;
 }
 //cout<<i<<endl;
 if(i<n or (dec and inc)){
  cout<<"NO"<<endl;
  return 0;
 }
 
 
 cout<<"YES"<<endl;
 return 0;
}