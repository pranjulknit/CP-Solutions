// Problem: B. Chess Tournament
// Contest: Codeforces - Educational Codeforces Round 113 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1569/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
int solve(string &s,ll n){
 
 if(n==0 || n==1){
  return 0;
 }
    
 
   // cout<<n<<endl;
 if(s[n-1]=='1' && s[n-2]=='1'){
         return 1+solve(s,n-1);
 }
 else{
  return solve(s,n-1);
 }
 
}
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n;cin>>n;
  
    string s;
    cin>>s;
    ll cnt2 = 0;
    for(ll i=0;i<n;i++){
     if(s[i]=='2'){
      cnt2++;
     }
    }
    if(cnt2 ==1 || cnt2 ==2){
     cout<<"NO"<<endl;
     continue;
    }
    
    
    char c[n][n];
    
    for(ll i=0;i<n;i++){
     c[i][i]='X';
    }
    
    for(ll i=0;i<n;i++){
     bool one = true;
     for(ll j=i+1;j<n;j++){
      
      if(s[i]=='1'){
       if(s[j]=='1'){
       c[i][j]='=';
       c[j][i]='=';
       }
       else{
        c[i][j]='+';
        c[j][i]='-';
       }
      }
      else{
       if(s[j]=='2'){
       if(one){
        
        c[i][j]='-';
        c[j][i]='+';
        one = false;
       }
       else{
        //cout<<"1";
        c[i][j]='+';
        c[j][i]='-';
       }
       }
       else{
        c[i][j]='-';
        c[j][i]='+';
       }
      }
     }
    }
    
    
    cout<<"YES"<<endl;
    
    for(ll i=0;i<n;i++){
     for(ll j=0;j<n;j++){
      cout<<c[i][j];
     }
     
     cout<<endl;
    }
    
 }
 }