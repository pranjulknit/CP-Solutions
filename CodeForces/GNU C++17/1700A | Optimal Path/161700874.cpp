 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 bool check = false;
 
 ll form(ll n){
  return n*(n+1)/2;
 }
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n,m;
  cin>>n>>m;
  
  cout<<form(m)+m*form(n)-m<<"\n";
  
 }
 
 return 0;
}