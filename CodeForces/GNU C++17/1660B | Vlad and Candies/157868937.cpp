// Problem: B. Vlad and Candies
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
 
 
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
  
  vector<ll> v;
  
  
  for(ll i=0;i<n;i++){
   ll insrt;
   cin>>insrt;
   
   v.push_back(insrt);
  }
  
  sort(v.begin(),v.end());
     if(n==1){
      if(v[0]>1){
       cout<<"NO"<<"\n";
      }
      else{
       cout<<"YES"<<"\n";
      }
     }
     else{
      if(v[n-1]>=v[n-2]+2){
       cout<<"NO"<<"\n";
      }
      else{
       cout<<"YES"<<"\n";
      }
     }
  
  //cout<<ans<<"\n";
  
 }
 return 0;
}