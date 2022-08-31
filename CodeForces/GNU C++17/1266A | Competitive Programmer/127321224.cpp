#include <bits/stdc++.h>
// counting divisors
#define ll long long int
 
using namespace std;
 
 
int main(){
   ll n;
 
   cin>>n;
   string s[n];
 
//    for(ll i=0;i<n;i++){
//     cin>>s[i];
//    }
    
   for(ll i=0;i<n;i++){
    string check;
    cin>>check;
    bool even = false;
    bool zero = false;
    ll sum =0;
    ll cntzero=0;
    for(ll i=0;i<check.size();i++){
     sum+= (check[i]-'0');
 
      if((check[i]-'0')%2 == 0 && (check[i]-'0') > 0){
        even = true;
        //cout<<check[i]<<" "<<"\n";
      }
      if(check[i]=='0'){
          zero = true;
          cntzero++;
      }
        
    }
    if(cntzero >1 )
      even = true;
     if((sum % 3 == 0)&&(even == true)&&(zero == true))
      cout<<"red"<<"\n";
     else
      cout<<"cyan"<<"\n";
 
   }
 
 
return 0;
}