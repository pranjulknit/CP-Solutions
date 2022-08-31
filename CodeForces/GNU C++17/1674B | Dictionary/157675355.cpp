// Problem: B. Dictionary
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define INF 1e9
using namespace std;
 
 
 
 
 
int main(){
 
 ll t;
 cin>>t;
 
 while(t--){
  string s;
  cin>>s;
  
  ll ans = 0;
  ans = (s[0]-'a')*25;
  if((s[0]-'a')>0 && s[0]>s[1])
  ans++;
  ans += (s[1]-'a');
  
  cout<<ans<<"\n";
 }
 return 0;
}