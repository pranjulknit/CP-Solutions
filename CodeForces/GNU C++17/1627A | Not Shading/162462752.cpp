// Problem: A. Not Shading
// Contest: Codeforces - Codeforces Round #766 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1627/A
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
  ll n,m,r,c;
  
  cin>>n>>m>>r>>c;
  
  char ch[n][m];
  bool black = false;
  bool allwhite = true;
  for(ll i=0;i<n;i++){
   for(ll j=0;j<m;j++){
    cin>>ch[i][j];
    
    if(ch[i][j]=='B'){
     black =true;
    }
   }
  }
  
  
  if(black == false){
   cout<<-1<<"\n";
  }
  else if(ch[r-1][c-1] == 'B'){
   cout<<0<<"\n";
  }
  else{
   bool f=false;
   for(ll i=0;i<n;i++){
    //cout<<i<<" "<<c-1<<"\n";
    if(ch[i][c-1]=='B'){
     //cout<<"y"<<"\n";
     f=true;
     break;
    }
   }
   
   
   
   
   for(ll j=0;j<m;j++){
    if(ch[r-1][j]=='B'){
     f=true;
     break;
    }
   }
   
   
   if(f || n==1 || m==1){
    cout<<1<<"\n";
   }
   else{
    cout<<2<<"\n";
   }
  }
  
  
 }
 return 0;
}