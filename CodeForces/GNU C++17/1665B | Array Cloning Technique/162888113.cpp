// Problem: B. Array Cloning Technique
// Contest: Codeforces - Codeforces Round #781 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1665/B
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
  ll n;
  cin>>n;
  
  vector<ll> v(n);
  map<ll,ll> mp;
  ll freq=0;
  //ll mostfreq = 0;
  for(ll i=0;i<n;i++){
   cin>>v[i];
   
   mp[v[i]]++;
   
   freq = max(freq,mp[v[i]]);
   
  }
  if(mp[v[0]]==n || n==0){
   cout<<0<<endl;
  }
  else{
  
  //ll req = n-mp[mostfreq.first];
  
    ll cnt=0;
    while(freq <=n){
     if(2*freq >=n){
      cnt+=(n-freq);
      break;
     }
     
     cnt+=freq;
     freq *=2;
     cnt++;
    }
  cout<<cnt+1<<endl;
  }
 }
 return 0;
}