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
 
 if((n%2 == 0 and isSquare(n/2)) or (n%4==0 and isSquare(n/4))){
  cout<<"YES"<<endl;
 }
 else{
  cout<<"NO"<<endl;
 }
}
 
 return 0;
 }