// Problem: B. Polo the Penguin and Matrix
// Contest: Codeforces - Codeforces Round #177 (Div. 2)
// URL: https://codeforces.com/problemset/problem/289/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
 
 
 
 
 
 
int main(){
 
 
 ll n,m;
 cin>>n>>m;
 ll d;
 cin>>d;
 
 
 
 vector<ll> v(n*m);
 
 map<ll,ll> mp;
 for(ll i=0;i<n*m;i++){
  cin>>v[i];
 
  mp[v[i]]++;
 }
 
   if(mp.size()==1){
    cout<<0<<endl;
    return 0;
   }
 sort(all(v));
 ll check = (n*m)/2 - bool((n*m)%2==0);
 // cout<<check<<endl;
 ll sum = 0;
 //cout<<v[check]<<endl;
 //cout<<v[n*m-1]<<endl;
 for(ll i=0;i<n*m;i++){
  
  sum += abs(v[check]- v[i]);
 }
 
 if(sum%d==0){
  cout<<sum/d<<endl;
  
 }
 else{
  cout<<-1<<endl;
 }
 
 return 0;
}