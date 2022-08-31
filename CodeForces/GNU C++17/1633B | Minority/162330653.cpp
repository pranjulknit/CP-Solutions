// Problem: B. Minority
// Contest: Codeforces - Educational Codeforces Round 122 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1633/B
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
     string s;
     cin>>s;
     ll cntzero = 0,cntone=0;
     for(ll i=0;i<s.size();i++){
      if(s[i]=='0'){
       cntzero++;
      }
      else{
       cntone++;
      }
     }
     
     if(s.size()==1){
      cout<<0<<"\n";
     }
     else if(cntzero==cntone){
      cout<<min(cntone,cntzero)-1<<"\n";
      
     }
     else{
      cout<<min(cntone,cntzero)<<"\n";
     }
    }
 return 0;
}