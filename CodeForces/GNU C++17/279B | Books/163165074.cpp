// Problem: B. Books
// Contest: Codeforces - Codeforces Round #171 (Div. 2)
// URL: https://codeforces.com/contest/279/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 //cin>>t;
 t=1;
 while(t--){
  ll n,m;
  cin>>n>>m;
  
  vector<ll> v(n);
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  
  ll left = 0,right = 0,window=0;
  ll ans = INT_MIN;
  while(left<n && right<n){
   
   while(right<n){
    window +=v[right];
    right++;
    if(window>m){
     window-=v[right-1];
     right--;
     break;
    }
    
   }
   //cout<<left<<" "<<right<<endl;
   ans = max(ans,right-left);
   
   window -= v[left];
   
   left++;
  }
  
  cout<<ans<<endl;
 }
 return 0;
}