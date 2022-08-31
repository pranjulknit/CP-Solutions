//CODEFROCES#698 Div2. Problem B UPSOLVING
 
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
          ll q,d;
          cin>>q>>d;
 
          while(q--){
            ll number;
            cin>>number;
            if(d*10<=number)
                cout<<"YES"<<"\n";
            else{   ll loop_time = 1;
                    for(;loop_time<=10;loop_time++){
                        //cout<<loop_time<<" "<<"loop_time"<<"\n";
                    if(loop_time*d % 10 == number % 10 && loop_time*d <= number){
                        cout<<"YES"<<"\n";
                       break;
                    }
                }
                //cout<<loop_time<<" "<<"loop_time"<<"\n";
                if(loop_time>10)
                    cout<<"NO"<<"\n";
            }
          }
 
    }
 
return 0;}