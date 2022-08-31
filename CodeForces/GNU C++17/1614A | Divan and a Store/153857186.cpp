#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
ll mx = 1000005;
ll N;
vector<vector<ll>> adj(1000005);
 
bool visited[1000005];
char c[10100][10010];
int ans =0;
void flood(int i,int j,char color,int n,int m){
 
 if(i<0 || j<0 || i>n-1 || j>m-1 || c[i][j] != '.'){
  return;
 }
 c[i][j]='#';
 
 
 flood(i+1,j,c[i][j],n,m);
 flood(i-1,j,c[i][j],n,m);
 flood(i,j-1,c[i][j],n,m);
 flood(i,j+1,c[i][j],n,m);
}
 
int main(){
 
 
 ll t;
 cin>>t;
 
 while(t--){
  ll n,l,r,k;
  cin>>n>>l>>r>>k;
  
     vector<ll> a(n);
     
     for(ll i=0;i<n;i++){
      cin>>a[i];
     }
     
     sort(a.begin(),a.end());
     ll sum=0;
     ll cnt=0;
        for(ll i=0;i<n;i++){
         if(l<=a[i] && a[i]<=r){
          if(k>=a[i]){
           k-=a[i];
           cnt++;
          }
          else{
           break;
          }
         } 
        }
        
        cout<<cnt<<"\n";
 }
 
return 0;
}