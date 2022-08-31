// Problem: A. Buying Torches
// Contest: Codeforces - Educational Codeforces Round 95 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1418/A
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
 ll x,y,k;
 
 cin>>x>>y>>k;
 
 ll totalneedcol = (k*y+k-1);
 ll total_trades = totalneedcol/(x-1)+bool(totalneedcol%(x-1));
 
 total_trades += k;
 cout<<total_trades<<endl;
}
 return 0;}