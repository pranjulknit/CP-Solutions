// Problem: A. Construct a Rectangle
// Contest: Codeforces - Educational Codeforces Round 120 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1622/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 void yes(){
  cout<<"YES"<<"\n";
 }
 
void no(){
 cout<<"NO"<<"\n";
 
}
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll a[3];
  ll sum =0;
  for(ll i=0;i<3;i++){
   cin>>a[i];
   sum+=a[i];
  }
  
  sort(a,a+3);
  if(sum%2==0){
   
   if(a[0]==a[1]&& a[1]==a[2]){
    yes();
   }
   else if((a[0]==a[1] && a[2]%2==0)||(a[1]==a[2]&&a[0]%2==0)||(a[0]==a[2]&&a[1]%2==0)){
    yes();
   }
   else if((a[0]!=a[1] && a[2]==(a[0]+a[1]))||
      (a[1]!=a[2]&&a[0]==a[1]+a[2]) ||
      (a[0]==a[2]&&a[1]==a[0]+a[2])){
       yes();
      }
      else{
       no();
      }
   
  }
  else{
   no();
  }
 }
 return 0;
}