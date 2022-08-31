// Problem: B. Bear and Finding Criminals
// Contest: Codeforces - Codeforces Round #356 (Div. 2)
// URL: https://codeforces.com/problemset/problem/680/B
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
 
#define MX  3000009
inline bool isSubstring(string s,string check){if(s.find(check)!= string::npos){return true;}return false;}
inline ll form(ll n){return n*(n+1)/2;}
 
 
 
 
 
 
 
 
 
 
int main(){
 
 
 vector<ll> v(1000,0);
 
 ll n;
 cin>>n;
 
 
 ll index;cin>>index;
 index+= 500;
 for(ll i=501;i<=n+500;i++){
  cin>>v[i];
 }
 
 
 
 
 ll ans=0;
 for(ll i=0;i<=101;i++){
  //cout<<v[index+i]<<" "<<v[index-i]<<endl;
  if(index-i>=501 and index+i<=500+n)
        {   
            if(i==0 and v[index]==1){
             ans+=1;
            }
         else if(i!= 0 and v[index+i]==1 and v[index-i]==1){
          ans+=2;
         }
         else{
          ans+=0;
         }
        }
        else{
         
         ans += max(v[index+i],v[index-i]);
         //cout<<ans<<endl;
        }
        if(index-i<=501 and  index+i>=500+n){
         break;
        }
 }
 cout<<ans<<endl;
 
 return 0;
}