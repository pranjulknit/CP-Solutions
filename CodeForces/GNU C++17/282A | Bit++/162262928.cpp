// Problem: A. Bit++
// Contest: Codeforces - Codeforces Round #173 (Div. 2)
// URL: https://codeforces.com/problemset/problem/282/A
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
 ll ans = 0;
 while(t--){
  string s;
  cin>>s;
  
  if(s=="X++"){
   ans++;
  }
  else  if(s=="X--"){
  ans--; 
  }
  else if(s=="++X"){
   ++ans;
  }
  else{
   --ans;
  }
 }
 
 cout<<ans<<"\n";
 return 0;
}