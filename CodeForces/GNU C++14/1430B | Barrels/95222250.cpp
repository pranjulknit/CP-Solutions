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
  for(ll i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  int64_t sum=0;
    for(ll i=n-k-1;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<"\n";
    }
return 0;}