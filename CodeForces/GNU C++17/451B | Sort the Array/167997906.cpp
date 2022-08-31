// Problem: B. Sort the Array
// Contest: Codeforces - Codeforces Round #258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
 
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
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
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
 
 
 
 ll n;
 
 cin>>n;
 
 vector<ll> v(n),temp;
 
 
 for(ll i=0;i<n;i++)
 {
  cin>>v[i];
 }
 
 temp = v;
 ll i=0;
 while(i+1<n and v[i+1]>v[i]){
  i++;
 }
 
 if(i==n-1){
  cout<<"yes"<<endl;
  cout<<1<<" "<<1<<endl;
  return 0;
 }
 
 v=temp;
 i=0;
 while(i+1<n and v[i+1]<v[i]){
  i++;
 }
 
 if(i==n-1){
  cout<<"yes"<<endl;
  cout<<1<<" "<<n<<endl;
  return 0;
 }
 
 // dec increasing
 v=temp;
 i=0;
 while(i+1<n and v[i+1]<v[i]){
  i++;
 }
 //cout<<i<<endl;
 reverse(v.begin(),v.begin()+i+1);
 ll ans = i+1;
  i=0;
 while(i+1<n and v[i+1]>v[i]){
  i++;
 }
 
 if(i==n-1){
  cout<<"yes"<<endl;
  cout<<1<<" "<<ans<<endl;
  return 0;
 }
 
 // inc drecreasing
 v=temp;
 i=0;
 while(i+1<n and v[i+1]>v[i]){
  i++;
 }
 ans = i+1;
 reverse(v.begin()+i+1,v.end());
  i=0;
 while(i+1<n and v[i+1]>v[i]){
  i++;
 }
 
 if(i==n-1){
  cout<<"yes"<<endl;
  cout<<ans<<" "<<n<<endl;
  return 0;
 }
 
 
 v=temp;
 
 i=0;
 while(i+1<n and v[i+1]>v[i]){
  i++;
 }
 ll l = i;
 
 while(i+1<n and v[i+1]<v[i]){
  //cout<<v[i+1]<<" "<<v[i]<<endl;
  i++;
 }
 ll r = i;
 reverse(v.begin()+l,v.begin()+r+1);
 
 
  i=0;
 while(i+1<n and v[i+1]>v[i]){
  i++;
 }
 
 if(i==n-1){
  cout<<"yes"<<endl;
  cout<<l+1<<" "<<r+1<<endl;
  return 0;
 }
 
 
 cout<<"no"<<endl;
 
 
 return 0;
}