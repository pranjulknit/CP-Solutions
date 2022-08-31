#include <bits/stdc++.h>
// counting divisors
#define ll long long int
 
using namespace std;
 
 
int main(){
   ll t;
    cin>>t;
    // ans();
    while(t--){
     ll a,b,c;
 
     cin>>a>>b>>c;
     
    ll dif = abs(a-b);
 
    ll ans = 2*dif;
 
    if(c>ans || b>ans|| a>ans){
      cout<<-1<<"\n";
    }
    else{
 
        ll check = c- ans/2;
      ll check1 = c + ans/2;
        if(check > 0)
      cout<<c-ans/2<<"\n";
      else if(check1 <= ans)
      cout<<check1<<"\n";
      
    }
 
 
}
 
    
return 0;
}