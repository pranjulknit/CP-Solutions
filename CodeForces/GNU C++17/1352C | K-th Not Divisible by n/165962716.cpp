#include <bits/stdc++.h>
#define ll long long int
 
using namespace std;
int main() {
   ll t;
   cin>>t;
 
   while(t--){
       ll n,k;
       cin>>n>>k;
 
       ll need = n-1;
 
       ll div = k/need;
       ll rem = k%need;
       ll ans;
       if(rem==0)
       ans = div*n - 1;
       else
          ans = div*n+rem;
 
          cout<<ans<<endl;
   }
 
}