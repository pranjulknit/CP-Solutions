//1CODEFORCES#699 PROBLEM A SPACE NEVIGATION
 
 
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
    ll px,py;
    cin>>px>>py;
 
    string s;
    cin>>s;
    ll mnsx=0;
    ll mnsy=0;
    ll plsx=0;
    ll plsy=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='L')
        mnsx++;
         else if(s[i]=='R')
         plsx++;
            else if(s[i]=='D')
            mnsy++;
            else if(s[i]=='U')
            plsy++;
    }
    bool flag1=true;
    bool flag2= true;
    bool flag3=true;
    bool flag4=true;
    if(px>0){
        if(plsx<px)
            flag1=false;
    }
    else if(px<0){
        if(mnsx<abs(px))
            flag2=false;
    }
    if(py>0){
        if(plsy<py)
            flag3=false;
    }
    else if( py<0){
        if(mnsy<abs(py))
            
            flag4=false;
    }
 
    if(flag1&&flag2&&flag3&&flag4)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
   }
 
return 0;}