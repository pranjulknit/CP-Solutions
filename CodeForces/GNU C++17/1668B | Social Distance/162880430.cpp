// Problem: B. Social Distance
// Contest: Codeforces - Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1668/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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
  ll kursiya;
  cin>>kursiya;
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  sort(v.begin(),v.end());
  // 
  ll sum =0;
  // nperson baithne k  liye
  sum =n;
  // first aur last k conflict k liye
  sum += max(v[0],v[n-1]);
  for(ll i=1;i<n;i++){
   sum +=max(v[i],v[i-1]);
  }
  
  //cout<<sum<<endl;
  if(sum<=kursiya){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 return 0;
}