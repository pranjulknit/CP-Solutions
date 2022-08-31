#include <bits/stdc++.h>
// counting divisors
#define ll long long int
 
using namespace std;
 
vector<ll> sequence;
 
 
void ans(){
    sequence.push_back(1);
 
    for(ll i=2;i<=2010;i++){
      if((i%3!=0) && (i%10 != 3)){
       
         sequence.push_back(i);
      }
      
 
    }
}
 
 
int main(){
   ll t;
    cin>>t;
     ans();
    while(t--){
      ll k;
      cin>>k;
      k-=1;
      cout<<sequence[k]<<"\n";
    }
return 0;
}