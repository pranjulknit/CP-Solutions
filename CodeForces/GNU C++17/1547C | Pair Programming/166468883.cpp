// Problem: C. Pair Programming
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1547/C
// Memory Limit: 512 MB
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
  ll lines, n,m;
  cin>>lines>>n>>m;
  
  
  vector<ll> a(n),b(m);
  //ll cntzero = 0;
  for(ll i=0;i<n;i++){
   cin>>a[i];
   
  }
  
  
  for(ll i=0;i<m;i++){
   cin>>b[i];
   
  }
  
  
  ll i=0;
  ll j=0;
  bool minus = false;
  vector<ll> ans;
  while(i<n and j<m){
   
   if(a[i]<=lines){
    if(a[i]==0){
     lines++;
    }
    ans.pb(a[i]);
    i++;
   }
   else if(b[j]<=lines){
    if(b[j]==0){
     lines++;
    }
    ans.pb(b[j]);
    j++;
   }
  if(a[i]>lines and b[j]>lines){
    minus = true;
    break;
   }
   
   
  }
  
  if(minus){
   cout<<-1<<endl;
   continue;
  }
  
  while(i<n){
   if(a[i]<=lines){
    if(a[i]==0){
     lines++;
    }
    ans.pb(a[i]);
    
   }
   else{
    minus = true;
    break;
   }
  i++;
  }
  
  
  if(minus){
   cout<<-1<<endl;
   continue;
  }
  
  
  while(j<m){
   if(b[j]<=lines){
    if(b[j]==0){
     lines++;
    }
    ans.pb(b[j]);
    
   }
   else{
    minus = true;
    break;
   }
   j++;
  }
  if(minus){
   cout<<-1<<endl;
   continue;
  }
  
  
  for(auto x:ans){
   cout<<x<<" ";
  }
  
  cout<<endl;
 }
 
 
 return 0;
}