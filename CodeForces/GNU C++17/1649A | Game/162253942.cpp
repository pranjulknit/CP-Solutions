 
 
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
  //vector<ll> v;
        ll a[n];
  for(ll i=0;i<n;i++){
   cin>>a[i];
   
   
  }
  //ll prev = -1;
 
       ll i=0;
       ll j=n-1;
       
       while(a[i]==1){
        i++;
       }
       
       while(a[j]==1){
        j--;
       }
  
  if(j>=0 && i<=n-1)
  cout<<j-i+2<<"\n";
  else{
   cout<<0<<"\n";
  }
 }
 return 0;
}