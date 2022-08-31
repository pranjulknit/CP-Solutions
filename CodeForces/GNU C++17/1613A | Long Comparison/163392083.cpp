// Problem: A. Long Comparison
// Contest: Codeforces - Educational Codeforces Round 118 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1613/A
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
  ll x,p;
  ll y,q;
  cin>>x>>p;
  
  cin>>y>>q;
  ll mn = min(p,q);
  p -=mn ;
  q -= mn;
  
  
   
   if(p>=7){
    cout<<">"<<endl;
    continue;
   }
   else if(q>=7){
    cout<<"<"<<endl;
    continue;
   }
   
   while(p>0){
    x*=10;
    p--;
   }
   
   while(q>0){
    y*=10;
    q--;
   }
   
   if(x==y){
    cout<<"="<<endl;
   }
   else if(x<y){
    cout<<"<"<<endl;
   }
   else{
    cout<<">"<<endl;
   }
  
  }
 return 0;}