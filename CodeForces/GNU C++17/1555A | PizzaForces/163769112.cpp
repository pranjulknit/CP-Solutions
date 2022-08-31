// Problem: A. PizzaForces
// Contest: Codeforces - Educational Codeforces Round 112 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1555/A
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
 
 
using namespace std;
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 
 if(n<=6){
  cout<<15<<endl;
 }
 else {
    if(n&1){
     n++;
    }
    cout<<(n/2)*5ll<<endl;
 }
}
 return 0;}