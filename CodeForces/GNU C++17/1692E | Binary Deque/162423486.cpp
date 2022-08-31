 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
ll binary(vector<ll> &prefix,ll key){
 
 ll i=0,j=prefix.size();
 ll ans = -1;
 while(i<j){
  ll mid = (i+j)/2;
  
  if(prefix[mid]<=key){
   ans = mid;
   i = mid+1;
  }
  else{
   j= mid;
  }
  
 }
 
 return i;
}
 
 
 
 int main(){
  
  ll t;
  
  cin>>t;
  
  while(t--){
   ll n,need_sum;
   
   cin>>n>>need_sum;
   
   ll a[n];
   ll sum = 0;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    sum += a[i];
   }
   if(sum<need_sum){
    cout<<-1<<"\n";
   }
   else if(sum == need_sum){
    cout<<0<<"\n";
    
   }
   else{
    
    vector<ll> prefix(n+1,0);
    
    for(ll i=0;i<n;i++){
     prefix[i+1] = prefix[i]+a[i];
    }
    
   ll ans = -10;
   for(ll i=0;i<n;i++){
    //cout<<prefix[i]+need_sum<<"\n";
    ll ind = binary(prefix,prefix[i]+need_sum);
    if(ind!=-1){
     ans = max(ans,ind-i-1);
     
    }
   }
     
    cout<<n-ans<<"\n";
     
   }
  }
  
  return 0;
 }