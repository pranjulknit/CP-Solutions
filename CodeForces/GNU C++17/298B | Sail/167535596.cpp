// Problem: B. Sail
// Contest: Codeforces - Codeforces Round #180 (Div. 2)
// URL: https://codeforces.com/problemset/problem/298/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(),x.end()
#define alli(x,k) x.begin()+k,x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
inline ll form(ll n){return n*(n+1)/2;}
#define line cout<<"line"<<endl
//power of large number
 
 
 
 
 
int main(){
 
 
 ll time,x,y,a,b;
 
 cin>>time>>x>>y>>a>>b;
 
 
 string s; 
 cin>>s;
 
 
 
 if(x==a and y==b){
  cout<<0<<endl;
  return 0;
 }
 
 ll reqa = a-x;
 ll reqb = b-y;
 
 ll posx=0,posy=0,negx=0,negy=0;
 
 //cout<<reqa<<" "<<reqb<<endl;
 for(ll i=0;i<time;i++){
  
  
  if(reqa >0){
   if(s[i] == 'E'){
   reqa--;
  }
  }
  
  if(reqa<0){
   if(s[i]=='W'){
    reqa++;
   }
  }
  
  if(reqb >0){
   if(s[i] == 'N'){
    reqb--;
   }
  }
  
  if(reqb<0){
   if(s[i]=='S'){
    reqb++;
   }
  }
  
  if(reqa == 0 and reqb==0){
   cout<<i+1<<endl;
   return 0;
  }
 
 }
 
 
 
 
 
 
 cout<<-1<<endl;
 
 return 0;
}