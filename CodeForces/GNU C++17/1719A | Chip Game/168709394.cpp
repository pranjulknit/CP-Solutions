 
 
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
 
 
 
 
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll x,y;
  cin>>x>>y;
  ll check1 = x-1;
  ll check2 = y-1;
  
  
  if(x==1 and y==1){
   cout<<"Tonya"<<endl;
   continue;
  }
  
  
    if(check1%2==1 and check2%2==1){
   cout<<"Tonya"<<endl;
  }
  else if((check1%2==0 and check2%2==1) or (check1%2==1 and check2%2==0)){
   cout<<"Burenka"<<endl;
  }
  
  else{
   cout<<"Tonya"<<endl;
  }
 }
 return 0;
}