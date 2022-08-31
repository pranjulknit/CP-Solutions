// Problem: B. Scenes From a Memory
// Contest: Codeforces - Codeforces Round #741 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1562/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
 
// Problem: B. Phoenix and Puzzle
// Contest: Codeforces - Codeforces Global Round 14
// URL: https://codeforces.com/problemset/problem/1515/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
 
 
 
using namespace std;
 
 inline bool isSquare(ll x){ll y = sqrt(x); return y*y == x;}
inline ll gcd(ll a,ll b){if(b==0){return a;}gcd(b,a%b);}
 
inline bool isprime(ll n){for(ll i=2;i*i<=n;i++){if(n%i==0){return true;}}return false;}
 
 
 bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
int main(){
ll t;
 
cin>>t;
 
while(t--){
 ll n;
 cin>>n;
 string s;
 
 cin>>s;
 
 string ans= "";
 bool one = false;
 
 
 
 for(ll j=0;j<n;j++){
   if(s[j]=='4' or s[j]=='6' or s[j]=='8' 
   or s[j]=='1' or s[j]=='0' or s[j]=='9'){
    ans = s[j];
    one = true;
    break;
   }
   
   }
   
 if(one){
  cout<<1<<endl;
  cout<<ans<<endl;
  continue;
 }
 bool two = false;
 for(ll i=0;i<n;i++){
  if(s[i]!=0)
  for(ll j=i+1;j<n;j++){
   
    ll number = (s[i]-'0')*10 + (s[j]-'0');
    if(isPrime(number)==false){
     ans +=s[i];
     ans += s[j];
     
     two = true;
     
     break;
    }
   
  }
  
  
  if(two){
   break;
  }
 }
 
 
 if(two){
  cout<<2<<endl;
  cout<<ans<<endl;
  continue;
 }
 
 cout<<"NUMber"<<endl;
 
 
}
 
 return 0;
 }