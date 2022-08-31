// Problem: C. Common Divisors
// Contest: Codeforces - Codeforces Round #579 (Div. 3)
// URL: https://codeforces.com/contest/1203/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
ll mod = 100000000003;
 
 
 
bitset<MX> isprime;
vector<ll> prime;
ll look[MX]={0};
void sieve(){
 
 isprime.set();
 isprime[0]=false;
 isprime[1]=false;
 for(unsigned ll p=2;p*p<MX;p++){
  if(isprime[p]){
  
  for(ll i=2*p; i<MX;i+=p){
   
   isprime[i]=false;
  }
  }
 
 }
 
 prime.pb(2);
 for(ll i=3;i<MX;i+=2){
  prime.pb(i);
 }
 
}
 
ll countDiv(ll gc){
 sieve();
 
 
 ll ans = 1;
 sieve();
    for(auto &pr:prime){
     
     if(pr*pr > gc){
      break;
     }
     
     if(gc%pr==0){
      
      ll cnt= 1;
      while(gc%pr==0){
       gc/=pr;
       cnt++;
      }
      //cout<<cnt<<endl;
      ans *= cnt;
     }
    }
    
    if(gc!=1){
     ans *= (2);
    }
    
 return ans;
}
 
 
 
int main(){
 
 ll n;cin>>n;
 
 vector<ll> v(n);
 
 
 for(ll i=0;i<n;i++){
  cin>>v[i];
 }
 
 if(n==1){
  cout<<countDiv(v[0])<<endl;
  return 0;
 }
 
 
 ll gc = __gcd(v[0],v[1]);
 
 
 if(n==2){
  cout<<countDiv(gc)<<endl;
  return 0;
 }
 
 for(ll i=2;i<n;i++){
  
  if(gc==1){
   cout<<1<<endl;
   return 0;
  }
  gc = __gcd(gc,v[i]);
 }
 
 
    cout<<countDiv(gc)<<endl;
    
 
 return 0;
}