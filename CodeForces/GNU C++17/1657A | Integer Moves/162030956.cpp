// Problem: A. Integer Moves
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1657/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
bool isPerfectSquare(long long int x)
{
    if (x >= 0) {
 
        long long int sr = sqrt(x);
         
      
        return (sr * sr == x);
    }
   
    return false;
}
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll a,b;
  cin>>a>>b;
  if(a==0 && b==0){
   cout<<0<<"\n";
  }
  else if(isPerfectSquare(a*a+b*b)){
   cout<<1<<"\n";
  }
  else{
   cout<<2<<"\n";
  }
  
 }
 return 0;
}