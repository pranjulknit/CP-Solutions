// Problem: B. Special Permutation
// Contest: Codeforces - Educational Codeforces Round 117 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1612/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
 
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    
    while(t--){
     ll n,b,c;
     cin>>n>>b>>c;
  
     
    
      vector<ll> ans;
     
     map<ll,ll> mp;
     ans.push_back(b);
     mp[b]++;
     mp[c]++;
     ll k= n;
     bool loop1 = false;
     ll i=1;
     while(i<n/2 || k!=0){
          if(!mp.count(k)){
       ans.push_back(k);
       mp[k]++;
       i++;
       }
       k--;
      }
     
     
     
     
     ans.push_back(c);
   //  mp[c]++;
     k=n;
     while(k!=0){
      if(!mp.count(k)){
       ans.push_back(k);
       
      }
      k--;
     }
     
     
     
     
     ll mn = INT_MAX;
     ll mx = INT_MIN;
    for(ll i=0;i<n/2;i++){
     mn = min(mn,ans[i]);
    }
    
    for(ll i=n/2;i<n;i++){
     mx = max(mx,ans[i]);
    }
     
     if(b!=mn or c != mx){
      cout<<-1<<endl;
      continue;
     }
//      
     for(auto x:ans){
      cout<<x<<" ";
     }
     
     cout<<endl;
      
     }
 
 return 0;}