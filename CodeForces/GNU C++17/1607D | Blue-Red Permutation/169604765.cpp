// Problem: D. Blue-Red Permutation
// Contest: Codeforces - Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1607/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
 
 ll t;
 cin>>t;
 
 
 while(t--){
  ll n;cin>>n;
  
  
  vector<ll> v(n);
  
  
  
  for(ll i=0;i<n;i++){
   cin>>v[i];
  }
  string s;
  cin>>s;
  
  
  vector<ll> one,second;
  bool no = false;
  map<ll,ll> mpone,mpsec;
  for(ll i=0;i<n;i++){
   if(s[i]=='B'){
    if(v[i]<=0){
     
     no = true;
     break;
    }
    mpone[v[i]]++;
    one.pb(v[i]);
   }
   else{
    
    if(v[i]>n+1){
     
     no = true;
     break;
    }
    mpsec[v[i]]++;
    second.pb(v[i]);
   }
  }
  
  //line;
  if(no){
   cout<<"NO"<<endl;
   continue;
  }
  
  // iska mtlb element range me hai
  
  
  //map one
  
  for(auto it:mpone){
   
   ll check = it.first;
   
   if(check>n){
    continue;
   }
     if(it.second>it.first){
     
      no = true;
      break;
      
     }
  }
   if(no){
   cout<<"NO"<<endl;
   continue;
  }
  
  // maptwo 
  
  for(auto it:mpsec){
   ll check= it.first;
   if(check<0){
    continue;
   }
   if(check==0){
    check++;
   }
   if(check>0){
    check = n-check+1;
   }
   if(it.second>check){
    //line;
    no = true;
    break;
   }
  }
  
   if(no){
   cout<<"NO"<<endl;
   continue;
  }
  
  
  //cout<<no<<endl;
  
  sort(all(one));
  
  for(ll i=0;i<one.size();i++){
   
   if(one[i]<i+1){
    no = true;
    break;
   }
   
  }
  
  //cout<<cnt<<endl;
  //cout<<no<<endl;
  if(no){
   
   cout<<"NO"<<endl;
   continue;
  }
  sort(all(second));
  reverse(all(second));
  
  
  for(ll i=0;i<second.size();i++){
   
   if(second[i]>n-i){
    no = true;
    break;
   }
  }
  
  
  if(no){
   
   cout<<"NO"<<endl;
   continue;
  }
  
  cout<<"YES"<<endl;
  
 }
 
 
 
 return 0;
}