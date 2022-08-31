#include <bits/stdc++.h>
 
#define ll long long int
 
using namespace std;
 
 
int main(){
 
 
ll t;
cin>>t;
while(t--){
    ll n,m;
     cin>>n>>m;
 
     ll a[n][m];
     pair<ll,pair<ll,ll>> p;
     p.first = INT_MIN;
     p.second.first = -1;
     p.second.second = -1;
     for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
 
            if(p.first<a[i][j]){
                p.first = a[i][j];
                p.second.first= i;
                p.second.second =j;
            }
        }
     }
 
       //cout<< p.second.first<<" "<< p.second.second<<endl;
     cout<<max(p.second.first+1,n-p.second.first)*max(p.second.second+1,m-p.second.second)<<"\n";
}
    
    
return 0;}