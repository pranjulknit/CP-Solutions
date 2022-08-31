// Problem: A. IQ Test
// Contest: Codeforces - Codeforces Round #176 (Div. 2)
// URL: https://codeforces.com/problemset/problem/287/A
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
 
 vector<string> s;
 
 for(ll i=0;i<4;i++){
  string check;
  cin>>check;
  
  s.pb(check);
 }
 
 
 for(ll i=0;i<3;i++){
  for(int j=0;j<3;j++){
   map<char,ll>mp;
   mp[s[i][j]]++;
   mp[s[i+1][j]]++;
   mp[s[i][j+1]]++;
   mp[s[i+1][j+1]]++;
   
   for(auto it:mp){
    if(it.second>=3){
     cout<<"YES"<<endl;
     return 0;
    }
   }
 
  }
 }
 cout<<"NO"<<endl;
 return 0;
}