#include <bits/stdc++.h>
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define FOR(i, n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define eb emplace_back
#define trav(a, x) for(auto& a: x)
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007
#define ll long long int
 
 
int main() {
    fast_cin();
   ll t;
   cin>>t;
   while(t--){
      ll n,coinzero,coinone,change;
      cin>>n>>coinzero>>coinone>>change;
      string s;
      cin>>s;
      ll ones=0;
      ll zero=0;
      for(ll i=0;i<n;i++){
         if(s[i]=='1'){
            ones++;
         }
         else
         {
            zero++;
         }
         
      }
   //   if(coinone<=coinzero){
   //      if(change<=coinzero){
   //       ll var = zero * change;
   //       ans = n*coinone;
   //       ans+=var;
   //      }
   //      else
   //      {
   //        ans = coinzero*zero+coinone*ones;
   //      }
        
   //   }
 
   ll var1 = ones*change;
   ll var0 = zero*change; 
 
   ll ans = min(ones*coinone+zero*coinzero,(min(var1+n*coinzero,var0+n*coinone)));
 
   cout<<ans<<"\n";
 
   }
return 0;}