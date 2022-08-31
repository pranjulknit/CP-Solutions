 
 
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
   
   
   ll a[n];
   
   map<ll,ll> mp;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++; 
    
   }
   
   
   // for(auto it:mp){
    // cout<<it.second<<" ";
   // }
   // cout<<"\n";
   // cout<<mp.size()<<"\n";
   if((n-mp.size()) %2 == 0){
    cout<<mp.size()<<"\n";
   }
   else{
    cout<<mp.size()-1<<"\n";
   }
   
  }
  
  
  return 0;
 }