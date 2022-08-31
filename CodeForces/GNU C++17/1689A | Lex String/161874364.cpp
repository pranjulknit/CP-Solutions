// Problem: A. Lex String
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1689/A
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
  ll n,m,k;
  cin>>n>>m>>k;
  
  string a,b;
  cin>>a>>b;
  
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  
  int i =0;
  int j =0;
  int cnti=0;
  int cntj=0;
  string ans = "";
  
  while(i<n && j<m){
   
   if((a[i]<=b[j] && cnti<k) || cntj==k){
    
    //cout<<cnti<<"\n";
    cntj=0;
      ans+=a[i];
      cnti++;
      //cout<<cnti<<"\n";
      i++;
      }
   else{
    //cout<<ans<<"\n";
    cnti=0;
    ans+=b[j];
    j++;
    cntj++;
   }
  }
  cout<<ans<<"\n";
  
 }
 return 0;
}