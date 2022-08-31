// Problem: A. Stable Arrangement of Rooks
// Contest: Codeforces - Hello 2022
// URL: https://codeforces.com/problemset/problem/1621/A
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
  ll n,k;
  
  cin>>n>>k;
  
  if(n%2==0 && k>n/2){
   cout<<-1<<"\n";
  }
  else if(n%2==1 && k>n/2 +1){
   cout<<-1<<"\n";
  }
  else{
   for(ll i=0;i<n;i++){
    
    for(ll j=0;j<n;j++){
     
     if(j==i && i%2==0 &&k>0){
      cout<<"R";
      k--;
     }
     else
     cout<<".";
    }
    cout<<"\n";
   }
   
   
  }
  
 }
 return 0;
}