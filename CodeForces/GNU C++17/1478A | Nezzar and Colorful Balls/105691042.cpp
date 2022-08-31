//CODEFROCES#698 Div2. Problem A
 
#include <bits/stdc++.h>
#define ll long long int
 
 
using namespace std;
 
 
bool Check_Divisibility(ll n)
{
    ll check = n;
 
    while(n)
    {
        ll x = n%10;
        if(x!=0 && check%x!=0)
            return false;
        n /= 10;
    }
    return true;
}
float slope(float x1, float y1, float x2, float y2)
{
    return (y2 - y1) / (x2 - x1);
}
int main()
{
    ll t;
    cin>>t;
 
    while(t--){
            unordered_map<ll,ll>m;
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        }
 
        ll cnt = 1;
 
        for(ll i=0;i<n;i++){
            cnt = max(m[a[i]],cnt);
        }
        cout<<cnt<<"\n";
 
    }
 
return 0;}