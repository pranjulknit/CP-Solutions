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
     ll n;
     cin>>n;
     string s;
     cin>>s;
     ll count1=0;
     ll count0=0;
     for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1] && s[i]=='1')
            count1+=1;
        else if(s[i]==s[i+1] && s[i] == '0')
            count0+=1;
     }
     //cout<<count0<<" "<<count1<<"\n";
     cout<<max(count1,count0)<<"\n";
    }
}