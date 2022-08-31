// Problem: B. Hungry Sequence
// Contest: Codeforces - Codeforces Round #191 (Div. 2)
// URL: https://codeforces.com/problemset/problem/327/B
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
inline ll gcd(ll a,ll b){if(a==0 or b==0)return 0;if(b%a==0){return a;}gcd(b%a,b);}
inline ll uppr_bound(vector<ll> &v ,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]<=key){low = mid+1;}else{high = mid;}}return low;}
inline ll lowr_bound(vector<ll> &v,ll key){ll low = 0,high = v.size();while(low<high){ll mid = low + (high-low)/2;if(v[mid]>=key){high = mid;}else{low = mid+1;}}return low;}
#define line cout<<"line"<<endl
#define MX  30009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
bitset<MX> isprime;
vector<ll> prime;
 
 
void sieve(){
 isprime.set();
 isprime[0] = false;
 isprime[1]=false;
 for(ll i=2;i*i<MX;i++){
 if(isprime[i]){
  for(ll j=2*i;j<MX;j+=i){
  isprime[j]=false;
 }
 }
 
 }
 
 for(ll i=2;i<MX;i++){
 if(isprime[i])
  prime.pb(i);
 }
}
 
 
 
int main(){
 
 
 ll n;
 
 cin>>n;
 // 2*n+1 sequence
 
 for(ll i=0;i<n;i++){
  cout<<2*n+i<<" ";
 }
 
 
 return 0;
}