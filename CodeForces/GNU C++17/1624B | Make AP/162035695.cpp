// Problem: A. GCD vs LCM
// Contest: Codeforces - Codeforces Round #781 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1665/A
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
   //ll a[3];
   
   ll a,b,c;
   cin>>a>>b>>c;
   
   
   ll dif1= b-a;
   ll dif2 = c-b;
   
   if(dif2 == dif1){
    cout<<"YES"<<"\n";
   }
   else{
    
    if(((2*b-c>0)&&(2*b-c)%a==0) ||((2*b-a >0)&&(2*b-a)%c==0) ||((a+c)%(2*b)==0)){
     cout<<"YES"<<"\n";
    }
    else{
     cout<<"NO"<<"\n";
    }
   }
  }
 return 0;
}