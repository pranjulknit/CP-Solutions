// Problem: A. Forbidden Subsequence
// Contest: Codeforces - Codeforces Round #761 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1617/A
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
  
  string t;
  cin>>t;
  
  sort(s.begin(),s.end());
  
  
  
  if(t=="abc"){
   string parta= "";
   string partb= "";
   string partc="";
   string other="";
   for(ll i=0;i<s.size();i++){
    if(s[i]=='a'){
     parta += s[i];
    }
    else if(s[i]=='b'){
     partb += s[i];
    }
    else if(s[i]=='c'){
     partc +=s[i];
    }
    else{
     other +=s[i];
    }
   }
   if(parta.size()>0 && partb.size()>0 && partc.size()>0)
   s=parta+partc+partb+other;
   
  }
  cout<<s<<"\n";
 }
 return 0;
}