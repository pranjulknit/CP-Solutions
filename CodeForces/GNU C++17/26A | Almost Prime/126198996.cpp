#include <bits/stdc++.h>
#include <iostream>
 
#define ll long long int
 
using namespace std;
 
 
 
 
 
int main(){
     ll n;
 
     cin>>n;
 
ll a[n+1] ={0};
 
 
ll cnt = 0;
 
 for(ll i=2;i<=n;i++){
 
    if(!a[i]){
      for(ll j=2*i;j<=n;j+=i){
        a[j]++;
      }
    }
    if(a[i] == 2)
      cnt++;
 }
cout<<cnt<<"\n";
    return 0;
}