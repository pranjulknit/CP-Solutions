#include <bits/stdc++.h>
#define ll long long int
 
 
using namespace std;
 
 
bool Check_Divisibility(ll n){
       ll check = n;
 
       while(n){
        ll x = n%10;
        if(x!=0 && check%x!=0)
            return false;
        n /= 10;
       }
   return true;
}
 
int main(){ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            while(!Check_Divisibility(n))
                n+=1;
            cout<<n<<"\n";
        }
return 0;}