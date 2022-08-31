// roman
#include <bits/stdc++.h>
#define ll  long long int
#define out  cout<<
 
using namespace std;
 
 
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        bool flag =false;
        for(ll i=0;i<n;i++){
            cin>>a[i];
 
        }
        ll cnt=0;
 
                sort(a,a+n);
               for(ll i=1;i<n;i++){
 
                cnt+=(k-a[i])/a[0];
 
 
        }
 
       cout<<cnt<<endl;
    }
return 0;}