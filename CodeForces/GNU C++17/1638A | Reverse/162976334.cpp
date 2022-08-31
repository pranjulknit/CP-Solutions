// Problem: A. Reverse
// Contest: Codeforces - Codeforces Round #771 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1638/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define endl "\n"
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
   vector<ll> check = v;
   
   sort(check.begin(),check.end());
   pair<ll,ll> x;
   bool terminate = false;
   for(ll i=0;i<n;i++){
    if(check[i]==v[i]){
     continue;
    }
    else{
     ll yenumber = check[i];
     terminate = true;
     for(ll j=i+1;j<n;j++){
      if(yenumber==v[j]){
       x.first = i;
       x.second=j;
       break;
      }
     }
    }
    if(terminate){
     break;
    }
   }
   
   reverse(v.begin()+x.first,v.begin()+x.second+1);
   
   for(int x:v){
    cout<<x<<" ";
   }
   cout<<endl;
   
 }
 return 0;
}