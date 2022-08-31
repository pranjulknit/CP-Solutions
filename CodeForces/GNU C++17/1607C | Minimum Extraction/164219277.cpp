// Problem: C. Minimum Extraction
// Contest: Codeforces - Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1607/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 
 vector<ll> v(n);
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 
 if(n==1){
  cout<<v[0]<<endl;
  continue;
 }
 
 sort(v.begin(),v.end());
 
 ll mx = v[0];
 for(ll i=1;i<n;i++){
  mx = max(mx,v[i]-v[i-1]);
 }
 
 cout<<mx<<endl;
}
 
 
 }