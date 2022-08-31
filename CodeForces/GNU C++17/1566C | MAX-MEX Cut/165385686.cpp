// Problem: C. MAX-MEX Cut
// Contest: Codeforces - Codeforces Global Round 16
// URL: https://codeforces.com/problemset/problem/1566/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
 
// Problem: B. Phoenix and Puzzle
// Contest: Codeforces - Codeforces Global Round 14
// URL: https://codeforces.com/problemset/problem/1515/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
 
 
 
using namespace std;
 
 inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
 
int main(){
ll t;
 
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 
 vector<pair<char,char>> v(n);
 
 for(ll i=0;i<n;i++){
  cin>>v[i].first;
  //cin>>v[i].second;
 }
 
 for(ll i=0;i<n;i++){
  //cin>>v[i].first;
  cin>>v[i].second;
 }
 ll cnt = 0;
 for(ll i=0;i<n;i++){
  //cout<<v[i].first<<" "<<v[i].second<<endl;
  //cout<<cnt<<endl;
  if(v[i].first != v[i].second){
   //
   cnt+=2;
  }
  else if((v[i].first == v[i].second) and v[i].first =='1'){
   
 if((i+1<n) and (v[i+1].first == v[i+1].second) and(v[i+1].first=='0')){
    cnt+=2;
    i++;
   }
   else{
    cnt+=0;
   }
  }
  else if((v[i].first == v[i].second) and v[i].first =='0'){
   
   
   
 if((i+1<n) and (v[i+1].first == v[i+1].second) and(v[i+1].first=='1')){
    cnt+=2;
    i++;
   }
   else{//cout<<"y"<<endl;
   cnt+=1;
  }
  }
  
  
  }
 
 
 cout<<cnt<<endl;
 
 }
 return 0;
 }