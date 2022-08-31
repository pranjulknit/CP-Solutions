// Problem: B. XY Sequence
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1657/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n,mx,x,y;
  cin>>n>>mx>>x>>y;
  ll sum = 0;
  ll prev =0;
  for(ll i=1;i<=n;i++){
   
   if(prev+x<=mx){
    prev+=x;
   }
   else{
    prev-=y;
   }
   
   sum+=prev;
   
  }
  
  cout<<sum<<"\n";
 }
 return 0;
}