// Problem: B. Consecutive Points Segment
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1671/B
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
    ll n;
    cin>>n;
    vector<ll>a(n),check(n),check2(n);
    
    
    for(ll i=0;i<n;i++){
     cin>>a[i];
    }
    check[0]=a[0]+1;
    bool one = true;
    for(ll i=1;i<n;i++){
     check[i]=check[i-1]+1;
     if(abs(a[i]-check[i])>1){
      one = false;
      break;
     }
    
    }
    
    bool second = true;
    check2[0]=a[0]-1;
    for(ll i=1;i<n;i++){
     check2[i]=check2[i-1]+1;
     if(abs(a[i]-check2[i])>1){
      second = false;
      break;
     }
    
    }
    
    if(one || second){
     cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
   
   }
 return 0;
}