// Problem: C. OKEA
// Contest: Codeforces - Codeforces Round #770 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1634/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  ll n,k;
  cin>>n>>k;
  
  if(k==1){
   cout<<"YES"<<endl;
   for(ll i=1;i<=n;i++){
    
    cout<<i<<endl;
   }
   continue;
  }
  else if (n%2==1){
   cout<<"NO"<<endl;
   continue;
  }
  else{
   cout<<"YES"<<endl;
   ll cntj=0;
   for(ll i=1;i<=n*k;i++){
    if(i&1){
     cout<<i<<" "; 
     cntj++;
    }
    else if(cntj%k==0 && i!=n*k){
     //cout<<i<<endl;
     
     cout<<endl;
     
    }
   }
   cntj=0;
   for(ll i=1;i<=n*k;i++){
    if(i%2==0){
     cout<<i<<" "; 
     cntj++;
    }
    else if(cntj%k==0){
     cout<<endl;
    }
   }
   cout<<endl;
  }
 }
 return 0;}