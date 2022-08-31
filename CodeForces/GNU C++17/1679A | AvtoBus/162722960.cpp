// Problem: A. AvtoBus
// Contest: Codeforces - Codeforces Round #791 (Div. 2)
// URL: https://codeforces.com/contest/1679/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define endl "\n"
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  
  if(n&1 || n<=3){
   cout<<-1<<endl;
  }
  else{
   n /=2;
   
   if(n%3==1 || n%3==2){
    cout<<n/3 +1<< " ";
   }
   else if(n%3==0){
    cout<<n/3<< " ";
   }
   
   cout<<n/2<<"\n";
  }
 }
 return 0;
}