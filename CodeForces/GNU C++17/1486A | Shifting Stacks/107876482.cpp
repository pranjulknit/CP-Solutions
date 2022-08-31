//CODEFROCES ROUND#703 PROBLEM A
 
#include <bits/stdc++.h>
#define ll long long int
 
 
using namespace std;
 
 
 
 
 
void tower_of_hanoi(ll n, ll from, ll to, ll mid){
    if(n==1){
        cout<<from<<" "<<to<<"\n";
        return;
    }
    tower_of_hanoi(n-1,from,mid,to);
    cout<<from<<" "<<to<<"\n";
    tower_of_hanoi(n-1,mid,to,from);
}
 
 
 
 
ll factorial(ll n){
    if(n==0||n==1)
        return 1;
    return n*factorial(n-1);
 
 }
int main()
{ ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    ll countzero=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
 
    }
    bool flag = true;
     ll check = 0;
     for(ll i=0;i<n;i++){
        check+=a[i];
        if(check<i){
            flag = false;
         break;}
         else{
            check-=i;
         }
     }
       if(flag==false)
        cout<<"NO"<<"\n";
       else
        cout<<"YES"<<"\n";
 
  }
 
 
return 0;}