#include <bits/stdc++.h>
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define FOR(i, n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define eb emplace_back
#define trav(a, x) for(auto& a: x)
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007
#define ll long long int
 
 
bool isSubSequence(char str1[], char str2[], ll m, ll n) 
{ 
   ll j = 0; 
   for (ll i=0; i<n&&j<m; i++) 
       if (str1[j] == str2[i]) 
         j++; 
  
    
   return (j==m); 
} 
  
 
int main() {
    fast_cin();
 
  ll t;
  cin>>t;
  while (t--)
  {ll n,k;
    cin>>n>>k;
 
    ll a[n];
    ll b[n];
    for(ll i=0;i<n;i++){
       cin>>a[i]>>b[i];
    }
    ll result = -1;
    bool flag;
    for(ll i=0;i<n;i++){flag = true;
      // cout<< result << endl;
       for(ll j=0;j<n;j++){
       if((abs(a[j]-a[i])+abs(b[j]-b[i]))>k){
         flag = false;
         break;
       }
       }
       if(flag == true){
         result = 1;
         break;}
    }
    cout<<result<<"\n";
 
  }
  
  
return 0;}