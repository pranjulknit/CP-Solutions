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
     ll l,r;
     cin>>l>>r;
 
     if(2*l>r)
        cout<<"YES"<<"\n";
     else
        cout<<"NO"<<"\n";
    }
}