// Problem: A. Madoka and Math Dad
// Contest: Codeforces - Codeforces Round #777 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1647/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
  ll n;
  
  cin>>n;
    if(n==1){
     cout<<1<<"\n";
    }
  else{
   ll sum =0;
   string check = "12";
   string check1 = "21";
   //ll x = 0;
   bool f = false;
   
   string ans = "";
   for(ll i=1;i<=1000000;i++){
    //cout<<sum<<"\n";
    sum+=(check[i%2]-'0');
    
    if(sum == n){
     ans+=check[i%2];
     f = true;
     break;
    }
    else if(sum>n){
     f=false;
     break;
    }
    ans+=check[i%2];
   }
   if(f){
    //cout<<"y"<<"\n";
    cout<<ans<<"\n";
   }
   else{
    ans="";
    sum=0;
   for(ll i=1;i<=1000000;i++){
    sum+=(check1[i%2]-'0');
    //cout<<sum<<"\n";
    if(sum == n){
     ans+=check1[i%2];
     break;
    }
    else if(sum>n){
     break;
    }
    ans+=check1[i%2];
    
    
   }
   cout<<ans<<"\n";
   }
  }
 }
 return 0;
}