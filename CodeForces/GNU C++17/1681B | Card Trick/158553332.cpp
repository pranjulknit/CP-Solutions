// Problem: B. Card Trick
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
  ll a[n];
  
  for(int i=0;i<n;i++){
   cin>>a[i];
  }
  
  ll m;
  cin>>m;
  ll b[m];
  ll index =0;
  for(int i=0;i<m;i++){
   cin>>b[i];
   index += (b[i]);
  }
  index %=n;
  cout<<a[index]<<"\n";
  
 }
 
 return 0;
}