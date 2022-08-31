// Problem: B. Kalindrome Array
// Contest: Codeforces - Codeforces Global Round 17
// URL: https://codeforces.com/problemset/problem/1610/B
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
 
 
 
bool isPalin(vector<ll> &v,ll x){
 ll i=0,j=v.size()-1;
  
  while(i<=j){
   if(v[i]== x){
    i++;
    continue;
   }
   else if( v[j]==x){
        j--;
    continue;
   }
   if(v[i]==v[j]){
    i++;
    j--;
   }
   else{
    return false;
   }
   
  }
 
 
 return true;
}
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n;
  cin>>n;
  
  
  vector<ll> v(n);
  
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  
  pll p;
  
  
  ll i=0,j=n-1;
  bool check = false;
  while(i<=j){
   if(v[i]==v[j]){
    i++;
    j--;
   }
   else if(v[i]!=v[j]){
     p.first = v[i];
     p.second = v[j]; 
    // check = true;
     break;
   }
  }
  
  if(i>j){
   cout<<"YES"<<endl;
   continue;
  }
  
  if(isPalin(v,p.first)){
   cout<<"YES"<<endl;
   continue;
  }
  
  if(isPalin(v,p.second)){
   cout<<"YES"<<endl;
   continue;
  }
  
  cout<<"NO"<<endl;
  
 }
 
 
 
 return 0;
}