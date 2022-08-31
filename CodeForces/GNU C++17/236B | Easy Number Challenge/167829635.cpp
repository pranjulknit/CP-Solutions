// Problem: B. Easy Number Challenge
// Contest: Codeforces - Codeforces Round #146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/B
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
#define MX  2000000
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
bitset<MX> isprime;
vector<ll> prime;
void sieve(){
 
 isprime.set();
 isprime[0]=false;
 isprime[1]=false;
 for(unsigned ll p=2;p*p<MX;p++){
  if(isprime[p]){
       prime.pb(p);
  for(ll i=2*p; i<MX;i+=p){
  
   isprime[i]=false;
  }
  }
 
 }
 
 
 
}
 
 
 
 
 
 
int main(){
 
 
 
 sieve();
 ll a,b,c;
 cin>>a>>b>>c;
 
 
 vector<ll> d(1000010,0);
 d[0]=0;
 d[1]=1;
 for(ll i=2;i<=1000000;i++){
  ll temp =i;
  ll an=1;
  
  for(auto pr:prime){
   
   if(pr*pr>temp){
    break;
   }
   
   if(temp%pr==0){
    ll cnt=1;
    while(temp%pr==0){
     cnt++;
     temp/=pr;
    }
    
    an *= cnt;
   }
  }
  
  d[i] = an;
  
  if(temp>1){
   d[i] *= 2;
  }
 }
   
   //cout<<d[8]<<endl;
 
  ll ans=0;
   for(ll i=1;i<=a;i++){
    for(ll j=1;j<=b;j++){
     for(ll k=1;k<=c;k++){
      ans +=d[i*j*k];
     }
    }
   }
 cout<<ans<<endl;
 
 return 0;
}