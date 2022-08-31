#include <bits/stdc++.h>
// counting divisors
#define ll long long int
 
using namespace std;
 
 
int main(){
  ll t;
   cin>>t;
 
   while(t--){
   ll b,c;
 
   cin>>b>>c;
 
    if(b==c)
      cout<<0<<" "<<0<<"\n";
    else{
      ll dif = abs(b-c);
 
      ll mn = min(b%dif, (dif - b%dif));
 
      cout<<dif<<" "<<mn<<"\n";
    }
   }
return 0;
}