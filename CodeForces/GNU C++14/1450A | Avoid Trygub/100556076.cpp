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
  {ll n;
  cin>>n;
  string s;
  string ans1 ="";
  string ans2 ="";
  cin>>s;
   for(ll i=0;i<n;i++){
      if(s[i]=='t'){
         ans1+='t';
      }
      else
      {
         ans2+=s[i];
      }
      
   }
   cout<<ans2+ans1<<endl;
  }
  
  
return 0;}