// Problem: A. Boys and Girls
// Contest: Codeforces - Codeforces Round #154 (Div. 2)
// URL: https://codeforces.com/problemset/problem/253/A
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
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
 
 
 
 
 
 
 
 
int main(){
 fast();
  freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 ll n,m;
 cin>>n>>m;
 
 if(n>=m){
  ll i=0;
 ll j=0;
 //ll cnt=0;
 while(i<n and j<m){
  cout<<"B";
  cout<<"G";
  i++;
  j++;
  //cnt+=2;
 }
 
 while(i<n){
  cout<<"B";
  i++;
  //cnt++;
 }
 
 
 }
 else{
  ll i=0;
 ll j=0;
 //ll cnt=0;
 while(i<n and j<m){
  cout<<"G";
  cout<<"B";
  i++;
  j++;
  //cnt+=2;
 }
 
 while(j<m){
  cout<<"G";
  j++;
  //cnt++;
 }
 
 }
 
 //cout<<cnt<<endl;
 return 0;
}