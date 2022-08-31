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
    ll a,b,c;
    cin>>a>>b>>c;
 
   bool flag=false;
    for(ll i=0;i<1000;i++){
        for(ll j=0;j<10000;j++){
            if(a*i+b*j ==c){
                flag=true;
                break;
            }
 
        }
    }
    if(flag)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
 
return 0;}