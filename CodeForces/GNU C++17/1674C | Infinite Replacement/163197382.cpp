// Problem: C. Infinite Replacement
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1674/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
 
 
using namespace std;
 
 
 
int main(){
 
ll t;
cin>>t;
 
while(t--){
 string s;
 cin>>s;
 
 string t;
 cin>>t;
 
 if(t=="a"){
  cout<<1<<endl;
 }
 else if(t.find("a")<t.size()){
  cout<<-1<<endl;
 }
 else{
  cout<<(ll)pow(2,s.size())<<endl;
 }
}
 
 return 0;}