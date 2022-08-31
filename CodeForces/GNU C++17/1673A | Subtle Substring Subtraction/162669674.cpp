// Problem: A. Subtle Substring Subtraction
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1673/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
ll con(string s){
 ll sum =0;
 
 for(auto c:s){
  sum +=((c-'a')+1);
 }
 
 return sum;
} 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  string s;
  cin>>s;
  
  ll n= s.size();
  
  if(n%2==0){
   cout<<"Alice"<<" ";
   cout<<con(s)<<"\n";
  }
  else{
   if(n==1){
    cout<<"Bob"<<" ";
    cout<<(s[0]-'a')+1<<"\n";
   }
   else if(s[0]>s[n-1]){
    ll al = con(s.substr(0,n-1));
    ll bo = (s[n-1]-'a')+1;
    
    
     cout<<"Alice"<<" ";
     cout<<al-bo<<"\n";
    
   }
   else{
    ll al = con(s.substr(1,n-1));
    ll bo = (s[0]-'a')+1;
    
    cout<<"Alice"<<" ";
    cout<<al-bo<<"\n";
   }
  }
 }
 return 0;
}