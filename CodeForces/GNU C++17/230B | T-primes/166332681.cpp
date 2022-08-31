// Problem: B. T-primes
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/B
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
#define line cout<<"line"<<endl
//power of large number
 
ll  isprime[1000010]={0};
void prime(){
 
 for(ll i=2;i<=1000000;i++){
  bool yes = true;
  for(ll j=2;j*j<=i;j++){
  if(i%j == 0){
   yes = false;
   break;
  }
 }
 
 if(yes){
  isprime[i]=1;
 }
 }
 
 
 
}
 
 
int main(){
 ll n;
 cin>>n;
 prime();
 // for(ll i=1;i<=100;i++){
  // if(isprime[i])
  // cout<<i<<" ";
 // }
 while(n--){
  ll x;
  cin>>x;
  
  //bool yes= false;
  if(isSquare(x) and x!=1){
   ll check = sqrt(x);
   if(isprime[check]){
     cout<<"YES"<<endl;
    
   }
   else{
     cout<<"NO"<<endl;
   }
  }
  else{
    cout<<"NO"<<endl;
  }
 
  
 }
 
 
 
 return 0;
}