// Problem: B. K-th Beautiful String
// Contest: Codeforces - Codeforces Round #629 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1328/B
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
  ll n,k;
 cin>>n>>k;
 
 ll i;
 
 for(i=0;i<=100000;i++){
  if(form(i)>=k){
   k-=form(i);
   break;
  }
 }
    
   // cout<<i<<endl;
  ll leftmost,rightmost;
  
  if(k==0){
   leftmost = n-2-i+1;
   rightmost = leftmost+1;
   
   for(ll i=0;i<n;i++){
  if(i==leftmost or i==rightmost)
   cout<<"b";
   else
  cout<<"a";
 }
 cout<<endl;
  }
     else{
      i--;
      //cout<<k<<" "<<i<<endl;
      leftmost = n-2-i;
      rightmost= leftmost+abs(k)+1;
      
   for(ll i=0;i<n;i++){
  if(i==leftmost or i==rightmost)
   cout<<"b";
   else
  cout<<"a";
 }
 cout<<endl;
     }
 
 
 
 }
 
 
 
 
 
 return 0;
}