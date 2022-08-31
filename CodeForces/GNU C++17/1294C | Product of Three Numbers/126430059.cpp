#include <bits/stdc++.h>
#include <iostream>
 
#define ll long long int
 
using namespace std;
 
vector<ll> primeSieve(ll *p){
  //vector<ll> p;
 
  p[0]=p[1]=0;
  p[2]=1;
 
  for(ll i=3;i<=1000000;i+=2){
    p[i]=1;
  }
 
  for(ll i=3;i<=1000000;i++){
    if(p[i]==1){
      for(ll j=i*i;j<=1000000;j+=i){
        p[j] = 0;
      }
    }
  }
 
 
  vector<ll> primes;
 
  primes.push_back(2);
 
  for(ll i=3;i<=1000000;i+=2){
 
    if(p[i])
    primes.push_back(i);
  }
 
 
 return primes;
}
 
int main(){  ll N=1000010;
    ll p[N]={0};
    vector<ll> primes = primeSieve(p);
     ll t;
 
     cin>>t;
 
 
    //  for(ll i=0;i<=100;i++)
    //     cout<<primes[i]<<" ";
 
     while(t--){
 
      ll n;
 
      cin>>n;
       
       ll temp = primes[0];
       ll cnt = 0;
       ll i = 0;
 
       vector<ll> divs;
       ll number = n;
       while(temp*temp <= n){
            if(n%temp == 0){
              while(n%temp == 0){
                n = n/temp;
              }
                
              divs.push_back(temp);
              cnt++;
 
            }
            i++;
            temp = primes[i];
            //cout<<temp<<" ";
            if(cnt == 3){
              
              break;
            }
       }
     
      if(n!=1){
        cnt++;
        divs.push_back(n);
      }
  // cout<<"cnt "<<cnt<<"\n";
      if(cnt == 1){
        ll check = divs[0];
        //cout<<check<<"\n";
        ll pow_ = pow(check,6);
        //cout<<pow_<<"\n";
        if(number>= pow_ && number/(check*check*check)>check*check){
            cout<<"Yes"<<"\n";
         cout<<check<<" "<<check*check<<" "<<number/(check*check*check)<<"\n";   
        }
        else 
        cout<<"No"<<"\n";
 
     }
    else if(cnt == 2){
      ll check = divs[0]*divs[1];
      
        bool flag = true;
      if((number/check) > divs[0] && (number/check) != divs[1]){
          cout<<"Yes"<<"\n";
          cout<<divs[0]<<" "<<divs[1]<<" "<<number/check<<"\n";
          flag = false;
      }
 
 
      if(flag)
      cout<<"No"<<"\n";
     }
     else if(cnt >= 3){
      cout<<"Yes"<<"\n";
      cout<<divs[0]<<" "<<divs[1]<<" "<<number/(divs[0]*divs[1])<<"\n";
     }
      else{
        cout<<"No"<<"\n";}
      }
    return 0;
}