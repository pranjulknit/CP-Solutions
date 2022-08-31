// Problem: B. Ternary String
// Contest: Codeforces - Educational Codeforces Round 87 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1354/B
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
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
//power of large number
 
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  string s;
  cin>>s;
  
  // two pointer method
  ll n = s.size();
  ll first = 0,second =0;
  map<ll,ll> mp;
  ll ans = 20000000;
  bool loop = false;
  while(first<n and second<n){
   //cout<<"t";
   mp[s[first]-'0']++;
   
   while(mp[s[second]-'0']>1){
    mp[s[second]-'0']--;
    second++;
   }
   
   if(mp[1]>0 and mp[2]>0 and mp[3]>0){
    loop = true;
    //cout<<first<<" "<<second<<endl;
    ans = min(ans,first-second+1);
    
   }
   first++;
  }
  if(loop)
  cout<<ans<<endl;
  else{
   cout<<0<<endl;
  }
 }
 
 
 
 
 return 0;
}