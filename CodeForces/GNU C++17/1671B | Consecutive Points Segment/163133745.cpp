// Problem: B. Consecutive Points Segment
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1671/B
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
    ll n;
    cin>>n;
    
    ll a[n];
    
    for(ll i=0;i<n;i++){
     cin>>a[i];
    }
   
   ll r= a[n-1];
   ll l = a[0];
   
   if(r-l -1 <=n){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   } 
    
   }
 return 0;
}