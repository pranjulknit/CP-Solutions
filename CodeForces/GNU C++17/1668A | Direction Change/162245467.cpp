// Problem: A. Direction Change
// Contest: Codeforces - Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1668/A
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
 
 while(t--){
  ll n,m;
  cin>>n>>m;
  if((n==1 && m>2) || (n>2 && m==1)){
   cout<<-1<<"\n";
  }
  else if(n==1 && m==1){
  cout<<0<<"\n"; 
  }
  else if((n==1 && m==2) || (n==2 && m==1)){
   cout<<1<<"\n";
  }
  else{
   ll dif = abs(n-m);
   if(dif&1)
   cout<<2*min(n,m)-2 +(dif/2)*4 +1<<"\n";
   else{
    cout<<2*min(n,m)-2 +(dif/2)*4<<"\n";
   }
  }
 }
 
 //cout<<ans<<"\n";
 return 0;
}