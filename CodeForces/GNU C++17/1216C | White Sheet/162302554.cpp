// Problem: C. White Sheet
// Contest: Codeforces - Codeforces Round #587 (Div. 3)
// URL: https://codeforces.com/contest/1216/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define f first
#define s second
#define pll pair<ll,ll>
#define pb push_back
using namespace std;
 
vector<ll> intersection_Point(vector<ll>a,vector<ll>b){
 
 ll bl_a_x =a[0], bl_a_y = a[1] , tr_a_x = a[2], tr_a_y=a[3];
 ll bl_b_x = b[0], bl_b_y = b[1],tr_b_x = b[2] ,tr_b_y = b[3];
 
 ll left = max(min(bl_a_x,tr_a_x),min(bl_b_x,tr_b_x));
 ll down = max(min(bl_a_y,tr_a_y),min(bl_b_y,tr_b_y));
 
 ll right = min(max(bl_a_x,tr_a_x),max(bl_b_x,tr_b_x));
 
 ll up = min(max(bl_a_y,tr_a_y),max(bl_b_y,tr_b_y));
 
 if(left>=right || down>=up){
  return {0,0,0,0};
 }
 else{
  return {left,down,right,up};
 }
}
 
ll area(vector<ll> &a){
 
 return abs(a[2]-a[0])*abs(a[3]-a[1]);
} 
 
int main(){
 vector<ll> a,b,c;
 
 for(ll i=0;i<4;i++){
  ll insrt;
  cin>>insrt;
  a.pb(insrt);
 }
 for(ll i=0;i<4;i++){
  ll insrt;
  cin>>insrt;
  b.pb(insrt);
 }
 
 for(ll i=0;i<4;i++){
  ll insrt;
  cin>>insrt;
  c.pb(insrt);
 }
 
 ll white_area = area(a);
 
 vector<ll> whi_bl1 = intersection_Point(a,b);
 
 vector<ll> whi_bl2 = intersection_Point(a,c);
 
 vector<ll> dono_bl_ka_inter = intersection_Point(whi_bl1,whi_bl2);
 
 //cout<<dono_bl_ka_inter<<"\n";
 
 ll phla_inte_area = area(whi_bl1);
 ll dusra_inte_area = area(whi_bl2);
 
 ll com_inte_area = area(dono_bl_ka_inter);
 
 if(white_area > phla_inte_area + dusra_inte_area - com_inte_area){
  cout<<"YES"<<"\n";
 }
 else{
  cout<<"NO"<<"\n";
 }
 
 return 0;
}