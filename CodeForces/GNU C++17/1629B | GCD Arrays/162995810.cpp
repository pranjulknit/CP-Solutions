// Problem: B. GCD Arrays
// Contest: Codeforces - Codeforces Round #767 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1629/B
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
 cin>>t;
 while(t--){
  ll l,r,k;
  cin>>l>>r>>k;
  ll cntodd = 0;
  // agr odd number ko multiply kr de to gcd 2 se bda a jayega
  ll n = (r-l)+1;
  if(n%2==1){
   if(l&1 || r&1)
   cntodd = n/2+1;
   else{
    cntodd =n/2;
   }
  }
  else {
   cntodd = n/2;
   
  }
  
  
  //cout<<cntodd<<endl;
  
  if(l==r && l>1){
   cout<<"YES"<<endl;
  }
  else if(cntodd<=k){
   
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 return 0;
}