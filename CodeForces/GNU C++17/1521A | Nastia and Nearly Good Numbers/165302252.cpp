// Problem: A. Nastia and Nearly Good Numbers
// Contest: Codeforces - Codeforces Round #720 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1521/A
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
 ll a,b;
 cin>>a>>b;
 
 if(b==1){
  cout<<"NO"<<endl;
  continue;
 }
 
 
 cout<<"YES"<<endl;
 
 if(b==2){
  b++;
 }
 cout<<a*(b-1) <<" "<< a*1<<" "<<a*b<<endl;
 
 
}
 
 return 0;
 }