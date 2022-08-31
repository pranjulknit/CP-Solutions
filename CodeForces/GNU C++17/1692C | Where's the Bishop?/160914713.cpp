 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 int main(){
  
  ll t;
  
  cin>>t;
  
  while(t--){
   
   char c[8][8];
   
   
   for(ll i=0;i<8;i++){
    for(ll j=0;j<8;j++){
     cin>>c[i][j];
    }
   }
   
   
   
  
  
  pair<ll,ll> p;
  for(ll i=0;i<8;i++){
   for(ll j=0;j<8;j++){
    if( i+1 < 8  && i-1 >=0 && j-1>=0 && j+1<8 && c[i][j] =='#'
    && c[i-1][j-1]=='#' && c[i-1][j+1]=='#' &&
    c[i+1][j-1] == '#' && c[i+1][j+1] == '#'){
     p = {i+1,j+1};
     break;
    }
   }
  }
  
  cout<<p.first<<" "<<p.second<<"\n";
  }
  return 0;
 }