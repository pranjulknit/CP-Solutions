#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <cstring>
 
 
#define test(t) while(t--)
 
#define ll  long long int
 
#define in  cin>>
#define out cout<<
#define en "\n"
#define sp " "
#define mod 1000000007
 
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0);
 
 
 
using namespace std; 
 
 
 
 
ll get_fibonacci_huge(ll n){
 
   ll v[n]={0};
   v[0] = 0;
   v[1] =1;
   for(ll i=2;i<=n;i++){
    v[i] = v[i-1] + v[i-2];
   }
   return v[n];
 
}
 
 
 
 
int main(){ fast()
          #ifndef   ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
          #endif
 
     
ll t;
 
cin>>t;
 
while(t--){
 
  ll n;
 
  cin>>n;
 
  ll a[n];
 
  for(ll i=0;i<n;i++)
    cin>>a[i];
 
 
ll check=a[0];
for(ll i=1;i<n;i++){
  check = check & a[i];
}
 
  cout<<check<<"\n";
}
 
 return 0;
}
 
          
 