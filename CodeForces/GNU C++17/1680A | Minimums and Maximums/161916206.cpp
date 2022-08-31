// Problem: A. Minimums and Maximums
// Contest: Codeforces - Educational Codeforces Round 128 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1680/A
// Memory Limit: 512 MB
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
  
  ll l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  if(l1>l2){
   swap(l1,l2);
   swap(r1,r2);
  }
  int ans =  max(l1,l2);
  
  if(ans<=r1 && ans<=r2){
   cout<<ans<<"\n";
  }
  else{
   cout<<ans+l1<<"\n";
  }
 }
 
 return 0;
}