// Problem: C. Not Adjacent Matrix
// Contest: Codeforces - Codeforces Round #719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
 
// Problem: B. Phoenix and Puzzle
// Contest: Codeforces - Codeforces Global Round 14
// URL: https://codeforces.com/problemset/problem/1515/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
 
 
 
using namespace std;
 
 inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
 
int main(){
ll t;
 
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 
 if(n==1){
  cout<<1<<endl;
  continue;
 }
 
 if(n==2){
  cout<<-1<<endl;
  continue;
 }
 
 
 vector<vector<ll>> ans(n,vector<ll> (n));
 ll k=0;
 for(ll i=2;i<=n*n;i+=2){
  cout<<i<<" ";
  k++;
  
  if(k%n==0){
   cout<<endl;
   k=0;
  }
  
 }
 
 for(ll i=1;i<=n*n;i+=2){
  cout<<i<<" ";
  k++;
  
  if(k%n==0){
   cout<<endl;
   k=0;
  }
  
 }
}
 
 return 0;
 }