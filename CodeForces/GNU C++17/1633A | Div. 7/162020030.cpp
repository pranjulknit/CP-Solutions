// Problem: B. GCD Problem
// Contest: Codeforces - Codeforces Round #761 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1617/B
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
  ll n;
  cin>>n;
  
  if(n%7==0 && n%10 != 0){
   //cout<<"y"<<"\n";
   cout<<n<<"\n";
  }
  else{
   n-= n%10;
   
   for(ll i=n;i<=n+10;i++){
    if(i%7==0){
     cout<<i<<"\n";
     break;
    }
    
   
   }
   
   }
   
   
  }
  
 
 
 return 0;
}