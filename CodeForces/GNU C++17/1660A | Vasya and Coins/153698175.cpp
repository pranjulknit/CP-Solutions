#include <bits/stdc++.h>
 
#define ll long long int
 
 
// how many time array is sorted
 
 
 
using namespace std;
 
 
int main(){
 
  ll t;
  cin>>t;
 
  while(t--){
    ll x,y;
    cin>>x>>y;
 
    if(x==0 && y==0 || x==0 && y!=0){
        cout<<1<<"\n";
    }
    else if(x!=1 && y==0){
        cout<<x+1<<"\n";
    }
    else{
        cout<<x+2*y+1<<"\n";
    }
  }
 
return 0;}