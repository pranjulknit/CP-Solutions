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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll b[n];
 
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++){
            cin>>b[i];
 
        }
 
        //sort(a,a+n);
        //sort(b,b+n);
        bool flag =true;
       for(ll i=0;i<n;i++){
        if(a[i]+b[n-1-i]>x){
            flag=false;
        }
       }
       if(flag)
        cout<<"Yes"<<"\n";
       else
        cout<<"No"<<"\n";
    }
return 0;}