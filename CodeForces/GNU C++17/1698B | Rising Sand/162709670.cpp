// Problem: B. Rising Sand
// Contest: Codeforces - Codeforces Round #803 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1698/B
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
  ll n,k;
  cin>>n>>k;
  
  ll a[n];
  
  for(ll i=0;i<n;i++){
   cin>>a[i];
  }
  ll cnt=0;
  //ll canbe=0;
  for(ll i=1;i<n-1;i++){
   //cout<<i<<" "<<a[i]<<" "<<a[i-1]<<" "<<a[i+1]<<endl;
   if(a[i]>(a[i-1]+a[i+1])){
    //cout<<i<<" i "<<cnt<<endl;
    cnt++;
   }
   
  }
  //cout<<cnt<<endl;
  if(cnt==n/2)
  cout<<cnt<<endl;
  else{
   if(k==1){
    if(n&1){
     cout<<n/2<<endl;
    }
    else{
     cout<<n/2 -1<<endl;
    }
   }
   else{//cout<<"y";
    cout<<cnt<<endl;
   }
  }
 }
 return 0;
}