// Problem: B. Make it Divisible by 25
// Contest: Codeforces - Codeforces Round #748 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1593/B
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
  string s;
  cin>>s;
  ll n = s.size();
  
  ll ans1 = 0;
  ll ans2 = 0;
  bool loop1 = false;
  bool loop2 = false;
  for(ll i=n-1;i>=0;i--){
   if(s[i]=='5' && loop1 == false){
    ans1 +=(n-1-i);
    //cout<<ans1<<endl;
    for(ll j=i-1;j>=0;j--){
     //cout<<j<<" "<<i<<endl;
     if(s[j]=='7' or s[j]=='2'){
      
      ans1+=(i-j)-1;
         loop1 = true;
         break;
     }
    }
   }
   else if(s[i]=='0' && loop2 ==false){
    ans2 +=(n-1-i);
    //cout<<ans2<<endl;
    for(ll j=i-1;j>=0;j--){
     //cout<<j<<" "<<i<<endl;
     if(s[j]=='0' or s[j]=='5'){
      ans2 +=(i-j)-1;
      loop2 = true;
      break;
     }
    }
   }
   
  }
  
  if(loop1 && loop2){
   cout<<min(ans1,ans2)<<endl;
  }
  else if(loop1){
   cout<<ans1<<endl;
  }
  else{
   cout<<ans2<<endl;
  }
 }
 return 0;}