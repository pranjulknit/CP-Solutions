// Problem: A. Strange Partition
// Contest: Codeforces - Codeforces Round #694 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1471/A
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
 
 
using namespace std;
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 ll n,x;
 cin>>n>>x;
 
 ll a[n];
 ll ans = 0;
 ll sum =0;
 for(ll i=0;i<n;i++)
 {
  cin>>a[i];
  
   ans+=(ceil)(a[i]/(x*1.0));
  
     sum+=a[i];  
 }
 sum =ceil(sum/(x*1.0));
 cout<<sum<<" "<<ans<<endl;
 
 
}
 return 0;}