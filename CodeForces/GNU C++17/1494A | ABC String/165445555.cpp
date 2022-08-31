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
 
// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{
 stack<char> temp;
  for(int i=0;i<expr.length();i++)
  {
   if(temp.empty())
   {
    temp.push(expr[i]);
   }
   else if((temp.top()=='('&& expr[i]==')') || (temp.top()=='{' && expr[i]=='}') || (temp.top()=='[' && expr[i]==']'))
   {
    temp.pop();
   }
   else
   {
    temp.push(expr[i]);
   }
  }
  if(temp.empty())
  {
   return true;
  }
  return false;
}
 
 
 
bool isRegular(string s){
 ll cnt =0;
 for(char c:s){
  if(c=='('){
   cnt++;
  }
  else if(c==')'){
   cnt--;
  }
  
  if(cnt<0){
   return false;
  }
 }
 
 return cnt==0;
}
 
int main(){
ll t;
 
cin>>t;
//t = 1;
while(t--){
       string s;
       cin>>s;
         ll n = s.size();
       if(s[0]==s[n-1]){
        cout<<"NO"<<endl;
        continue;
       }
       char first = '(';
       char second = ')';
       string ans = "";
     
       for(ll i=0;i<n;i++){
        if(s[i]==s[0]){
         ans +=first;
        }
        else if(s[i]==s[n-1]){
         ans +=second;
        }
        else {
         // closing bracket
         ans+=')';
        }
       }
       
       if(isRegular(ans)){
        cout<<"YES"<<endl;
        continue;
       }
       
       
       ans = "";
       
       for(ll i=0;i<n;i++){
        if(s[i]==s[0]){
         ans +=first;
        }
        else if(s[i]==s[n-1]){
         ans +=second;
        }
        else {
         //opening bracket
         ans+='(';
        }
       }
       
       
       if(isRegular(ans)){
        cout<<"YES"<<endl;
        continue;
       }
       else{
        cout<<"NO"<<endl;
       }
       
}
 
 return 0;
 }