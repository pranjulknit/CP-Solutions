 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
 int main(){
  
  ll t;
  
  cin>>t;
  
  while(t--){
   string s;
   
   cin>>s;
   
   ll x;
   cin>>x;
   
   int h = (s[0]-'0')*10 + (s[1]-'0');
   
   int m = (s[3] - '0')*10 + (s[4] - '0');
   int temph = h;
   int tempm = m;
   
   //cout<<temph<<" "<<tempm<<"\n";
    ll cnt = 0;
    
    do{
     m += x; 
     h += m/60;
     h %= 24;
     m %=60;
     
     
     //cout<<h<<" "<<m<<"\n";
     if(h/10 == m%10 && h%10 == m/10){
      cnt++;
     }
    }while(temph != h ||  tempm != m);
    
    cout<<cnt<<"\n";
  }
  return 0;
 }