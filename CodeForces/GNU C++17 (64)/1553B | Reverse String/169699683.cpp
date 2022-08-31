// Problem: B. Reverse String
// Contest: Codeforces - Harbour.Space Scholarship Contest 2021-2022 (open for everyone, rated, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1553/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
 
 
 
bool left(string s,string t,ll i,ll j){
 
 
 while(i>=0 and j<t.size()){
  if(s[i]==t[j]){
   i--;
      j++;
  }
  else{
   return false;
  }
  
  
 }
 if(j==t.size())
 return true;
 
 return false;
}
 
 
 
bool right (string s,string t, ll i,ll j){
 
   // base case
   if(j== t.size()){
    return true;
   }
   
 
   
 
   
   // compute
   ll x=0,y=0;
   // right jana hai
   if(i+1<s.size() and s[i+1] == t[j]){
    x = right(s,t,i+1,j+1);
   }
   
   if(x){
    return x;
   }
   // left jana hai
   if(i-1>=0 and s[i-1]==t[j]){
    y = left(s,t,i-1,j);
   }
   //save and return 
   return (x or y);
}
 
 
 
 
int main(){
 
 
 
 ll t;
 cin>>t;
 
 
 while(t--){
  string s;
  cin>>s;
  
  
  string t;
  
  cin>>t;
  bool yes = false;
  
  for(ll i=0;i<s.size();i++){
   
   if(s[i]==t[0]){
    yes =  right(s,t,i,1);
   
   }
   
   if(yes){
    break;
   }
  }
  
  if(yes){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 
 
 return 0;
}