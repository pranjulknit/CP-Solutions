// double typecasting hta ke
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define f first
#define s second
#define endl "\n"
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  pair<ll,ll> a,b,c;
  
  cin>>a.f>>a.s;
  cin>>b.f>>b.s;
  cin>>c.f>>c.s;
  
  if(a.s == b.s && a.s !=0){
   if(c.s> a.s && c.s>b.s)
   cout<<fixed<<setprecision(9)<<0<<endl;
   else
   cout<<fixed<<setprecision(9)<<abs(a.f-b.f)<<endl;
  }
  else if(b.s == c.s && b.s !=0){
   if(a.s > b.s && a.s>c.s){
  cout<<fixed<<setprecision(9)<<0<<endl;
 
   }
   else
   cout<<fixed<<setprecision(9)<<abs(b.f-c.f)<<endl;
  }
  else if(a.s == c.s && a.s !=0){
   if(b.s>a.s && b.s>c.s){
  cout<<fixed<<setprecision(9)<<0<<endl;
 
   }
   else
   cout<<fixed<<setprecision(9)<<abs(a.f-c.f)<<endl;
  }
  else{
   cout<<fixed<<setprecision(9)<<0<<endl;
  }
 }
 return 0;
}