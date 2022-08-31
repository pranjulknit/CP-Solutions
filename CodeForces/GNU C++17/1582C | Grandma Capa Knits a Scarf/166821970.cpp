// Problem: C. Grandma Capa Knits a Scarf
// Contest: Codeforces - Codeforces Round #750 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1582/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
#define alli(x,k) x.begin()+k,x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
#define line cout<<"line"<<endl
//power of large number
 
 
 
 
 
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n;
  cin>>n;
  
  string s;
  cin>>s;
  
  //bool yes= true;
  
  map<char,ll> mp;
   for(char c:s){
    mp[c]++;
   }
  
  ll ans = INT_MAX;
  for(auto x:mp){
   
   char c= x.first;
       ll i=0,j=n-1;
     ll change = 0;
     
     while(i<=j){
      if(s[i]!=s[j]){
       if(s[i]==c){
        i++;
        change++;
       }
       else if(s[j]==c){
        j--;
        change++;
       }
       else{
        change = INT_MAX;
        break;
       }
      }
      else{
       i++,j--;
      }
     }
   ans = min(ans,change);
  }
 
  if(ans == INT_MAX){
   ans= -1;
  }
  
  cout<<ans<<endl;
  
  
 }
 
 
 return 0;
}