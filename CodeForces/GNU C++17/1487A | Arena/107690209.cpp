//EDUCATIONAL CODEFORCES ROUND#104 solution after runtime error
 
 
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
 
 
 
 
void tower_of_hanoi(ll n, ll from, ll to, ll mid){
    if(n==1){
        cout<<from<<" "<<to<<"\n";
        return;
    }
    tower_of_hanoi(n-1,from,mid,to);
    cout<<from<<" "<<to<<"\n";
    tower_of_hanoi(n-1,mid,to,from);
}
 
 
 
 
ll factorial(ll n){
    if(n==0||n==1)
        return 1;
    return n*factorial(n-1);
 
 }
int main()
{ ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    ll h[101]={0};
    for(ll i=0;i<n;i++){
       cin>>a[i];
       h[a[i]]++;
    }
    ll mn = *min_element(a,a+n);
    if(h[mn]<n)
    cout<<n-h[mn]<<"\n";
    else
        cout<<0<<"\n";
  }
 
 
return 0;}