// Problem: A. Digit Minimization
// Contest: Codeforces - Codeforces Round #792 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1684/A
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
  string s;
  cin>>s;
  
  int n = s.size();
  if(n == 2){
   cout<<s[1]<<"\n";
  }
  else{
   sort(s.begin(),s.end());
   cout<<s[0]<<"\n";
  }
 }
 return 0;
}