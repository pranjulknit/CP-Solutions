#include <bits/stdc++.h>
#define ll  long long int
#define out  cout<<
 
using namespace std;
 
 
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
 
        }
        ll cnt=0;
        for(ll i=0;i<n-1;i++){
            if(a[i+1]<a[i]){
                cnt+=1;
            }
        }
        //cout<<"cnt"<<cnt<<endl;
 
        if(cnt == n -1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
return 0;}