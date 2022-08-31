// Problem: B. Odd Subarrays
// Contest: Codeforces - Codeforces Round #794 (Div. 2)
 
 
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
  
  
     vector<ll> a;
     map<ll,ll> mp;
    for(ll i=0;i<n;i++){
     ll insrt;
     cin>>insrt;
     
     a.push_back(insrt);
     mp[insrt]++;
    }
      
    bool flag = true;
    vector<ll> ans;
    for(ll i=0;i<n;i++){
     if(mp[a[i]]==1){
      flag = false;
      break;
     }
     
     else{
      int k = mp[a[i]];
      
      for(int j=0;j<k;j++){
       if(j==0){
        ans.push_back(i+k);
        //k--;
       }
       else{
        ans.push_back(j+i);
       }
      }
      // while(k){
       // ans.push_back(i+k);
       // k--;
      // }
      i+=mp[a[i]]-1;
     }
     
    } 
    
    if(flag == false){
     cout<<-1;
     
    } 
     else{
     for(int x:ans){
      cout<<x<<" ";
     } 
     
     
 }
 cout<<"\n";
 }
 
 return 0;
}