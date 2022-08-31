// Problem: B. Permutation Sort
// Contest: Codeforces - Educational Codeforces Round 109 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1525/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  ll n;
  cin>>n;
  
  vector<ll> v(n),tmp;
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
   
  }
  tmp = v;
  
  sort(tmp.begin(),tmp.end());
  
  if(tmp==v){
   cout<<0<<endl;
  }
  else if(tmp[0] == v[0] or tmp[n-1]== v[n-1]){
   cout<<1<<endl;
  }
  else{
   vector<ll> another;
   another = v;
   sort(v.begin()+1,v.end());
   sort(v.begin(),v.end()-1);
   
   if(v==tmp){
    cout<<2<<endl;
   }
   else{
    v= another;
     sort(v.begin(),v.end()-1);
    sort(v.begin()+1,v.end());
           if(v==tmp){
    cout<<2<<endl;
        }
        else{
         cout<<3<<endl;
        }
    
   }
   
  }
 }
 }