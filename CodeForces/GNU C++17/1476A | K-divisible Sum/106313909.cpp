//15CSES PROBLEM tower of hanoi
 
 
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
 
int main()
{ ll t;
   cin>>t;
   while(t--){
    ll n,k;
    cin>>n>>k;
 
    if(k%n==0){
        cout<<k/n<<"\n";
 
   }
   else if(k>=n){
    cout<<k/n + 1<<"\n";
   }
   else{
    k = k* (long long int)ceil(double(n)/k);
    if(k%n==0){
        cout<<k/n<<"\n";
 
   }
   else if(k>=n){
    cout<<k/n + 1<<"\n";
   }
   }
   }
return 0;}