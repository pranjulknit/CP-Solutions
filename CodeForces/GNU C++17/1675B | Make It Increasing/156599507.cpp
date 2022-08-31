// Problem: B. Make It Increasing
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
 
 
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
 
 
void solve(vector<ll> &v,ll index,ll k,ll n){
 if(n==1){
  cout<<v[0]<<" ";
  return;
 }
    index = (index+k)%n;
 cout<<v[index]<<" ";
 v.erase(v.begin()+index);
 
    solve(v,index,k,n-1);
}
 
 
bool isValid(vector<ll> &v,ll n,ll mid,ll k){
 ll num =1;
 ll currSum=0;
 for(ll i=0;i<n;i++){
  currSum += v[i];
  // cout<<currSum<<"\n";
  if(currSum>mid){
   num++;
   currSum = v[i];
  }
  if(num > k)
  return false;
 }
 
 return true;
 
}
 
int main(){
   ll t;
   cin>>t;
   
   while(t--){
    ll n;
    cin>>n;
    
    vector<ll> v;
    
    for(ll i=0;i<n;i++){
 ll k;
     cin>>k;
     v.push_back(k);
    }
    if(n==1){
     cout<<0<<"\n";
    }
    else{
    ll cnt =0;
    bool flag = true;
    for(ll i=n-1;i>=1;i--){
     if(v[i]== 0 && i!=0){
      cout<<-1<<"\n";
      flag = false;
      break;
     }
     if(v[i-1]<v[i]){
      continue;
     }
     else if(v[i-1]>=v[i]){
      ll loop = 0;
      while(v[i-1]>=v[i]){
       v[i-1]/=2;
       loop ++;
      }
      cnt+= loop;
     }
     
    }
    if(flag)
    cout<<cnt<<"\n";}
   }
 
 
return 0;
}