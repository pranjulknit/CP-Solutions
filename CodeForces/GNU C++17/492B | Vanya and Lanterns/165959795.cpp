#include <bits/stdc++.h>
#define ll long long int
 
using namespace std;
int main() {
   ll n,m;
   cin>>n>>m;
 
   vector<ll> v(n);
  
   for(ll i=0;i<n;i++){
       cin>>v[i];
   }
 
   sort(v.begin(),v.end());
   ll mx = 0;
   for(ll i=0;i<n-1;i++){
       mx = max(mx,v[i+1]-v[i]);
   }
 
   cout<<fixed<<setprecision(9)<<max((double)max(v[0]-0,m-v[n-1]),(double)mx/2.0)<<endl;
 
}