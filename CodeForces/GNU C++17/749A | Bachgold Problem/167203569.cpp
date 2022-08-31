// Problem: A. Bachgold Problem
// Contest: Codeforces - Codeforces Round #388 (Div. 2)
// URL: https://codeforces.com/problemset/problem/749/A
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
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0)
 
using namespace std;
 
 
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;
inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
 
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
vector<ll> prime;
vector<bool> check(100010,true);
void sieve(ll n){
 
 for(ll p=2;p*p<=n;p++){
  if(prime[p]==true){
   for(ll i=p*p;i<=n;i+=p){
   prime[i]=false;
  }
  }
  
 }
 
 for(ll i=2;i<=n;i++){
  if(check[i]){
   prime.pb(i);
  }
 }
}
 
 
 
 
int main(){
 
 ll n;
 cin>>n;
 
//  
 // if(check[n]){
  // cout<<1<<endl;
  // cout<<n<<endl;
 // }
 vector<ll> ans;
 
 
 if(n%2==0){
  cout<<n/2<<endl;
  
  for(ll i=0;i<n/2;i++){
   cout<<2<<" ";
  }
 }
 else{
  n-=3;
  //cout<<n<<endl;
  cout<<n/2 +1<<endl;
  for(ll i=0;i<n/2;i++){
   cout<<2<<" ";
  }
  cout<<3<<endl;
 }
 cout<<endl;
 return 0;
}