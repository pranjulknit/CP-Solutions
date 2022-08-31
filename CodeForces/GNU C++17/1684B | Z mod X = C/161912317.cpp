// Problem: B. Z mod X = C
// Contest: Codeforces - Codeforces Round #792 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1684/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 while(t--)
 {
  ll a,b,c;
  
  cin>>a>>b>>c;
  
   ll sum = a+b+c;
   
   cout<<sum<<" "<<sum-a<<" "<<sum-b-a<<"\n";
 
 }
 return 0;
}