// Problem: A. Food for Animals
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll a,b,c,x,y;
  cin>>a>>b>>c>>x>>y;
  
  ll xneed = x-a;
  ll yneed = y-b;
  if(xneed<=0 && yneed<=0){
   cout<<"YES"<<"\n";
  }
  else if(xneed<=0){
   yneed -= c;
   //cout<<yneed<<"\n";
   if(yneed <=0){
    cout<<"YES"<<"\n";
   }
   else{
    cout<<"NO"<<"\n";
   }
  }
  else if(yneed<=0){
   xneed -= c;
   if(xneed <=0){
    cout<<"YES"<<"\n";
   }
   else{
    cout<<"NO"<<"\n";
   }
  }
  else{
   c-= xneed;
   c-= yneed;
   
   if(c>=0){
    cout<<"YES"<<"\n";
   }
   else{
    cout<<"NO"<<"\n";
   }
  }
 }
 return 0;
}