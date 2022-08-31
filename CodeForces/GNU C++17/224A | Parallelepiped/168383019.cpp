// Problem: A. Parallelepiped
// Contest: Codeforces - Codeforces Round #138 (Div. 2)
// URL: https://codeforces.com/problemset/problem/224/A
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
 
 
 
 
 
 
 
 
 
 
 
 
int main(){
 
 
 
 ll ab,bc,ca;
 cin>>ab>>bc>>ca;
 
 
 double ratio1 = (double) ab/bc*1.0;
 double ratio2 = (double) bc/ca*1.0;
 //cout<<ratio1<<" "<<ratio2<<endl;
 ll a = (ll) sqrt(bc*(ratio1/ratio2));
 ll b = (ll)ab/a;
 ll c = (ll)ca/a;
 
 cout<<4*a + 4*b + 4*c<<endl;
 
 
 
 
 
 
 
 return 0;
}