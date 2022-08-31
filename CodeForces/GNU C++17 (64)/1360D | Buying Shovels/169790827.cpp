// Problem: D. Buying Shovels
// Contest: Codeforces - Codeforces Round #644 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1360/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define endl "\n"
#define pll pair<ll,ll>
 
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
#define ff first
#define ss second
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
bitset<MX> isprime;
vector<ll> prime;
 
void seive(){
 isprime.set();
 isprime[0]=false;
 isprime[1] = false;
 
 for(unsigned ll p=2;p*p<MX;p++){
  if(isprime[p]){
   prime.pb(p);
   for(ll i=2*p;i<MX;i+=p){
   isprime[i]=false;
  }
  }
  
 }
}
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 //seive();
 while(t--){
  ll x,y;
  cin>>x>>y;
  if(x<=y){
   cout<<1<<endl;
   continue;
  }
  
  ll num = -1;
  for(ll i=2;i*i<=x;i++){
   
   if(x%i==0){
    //cout<<i<<endl;
    
     ll check = x/i;
     //cout<<i<<" "<<check<<endl;
    if(check<=y){
     num = max(num,check);
    }
    
    if(i<=y){
     num = max(num,i);
    }
    
   }
  }
  
  if(num==-1){
   cout<<x<<endl;
   continue;
  }
  
  
  
  cout<<x/num<<endl;
 }
 
 
 return 0;
}