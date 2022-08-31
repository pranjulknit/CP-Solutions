// Problem: A. XXXXX
// Contest: Codeforces - Codeforces Round #649 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1364/A
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
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n,x;
  cin>>n>>x;
  
  
  vector<ll> v(n);
  ll sum = 0;
  vector<ll> prefix(n+1,0);
  for(ll i=0;i<n;i++){
   cin>>v[i];
   sum += v[i];
   //prefix[i+1] = prefix[i]+a[i];
  }
  
  
  if(sum%x==0){
   ll i=0;
   ll j=n-1;
   //ll deletfirst = 0;
   while(i<n){
    if(v[i]%x!=0){
     break;
    }
    i++;
   }
   
   if(i==n){
    cout<<-1<<endl;
    continue;
   }
   
   
   while(j>=0){
    if(v[j]%x!=0){
     break;
    }
    j--;
   }
   
   cout<<max(n-1-i,j)<<endl;
  }
  else{
   cout<<n<<endl;
  }
 }
 
 
 
 
 return 0;
}