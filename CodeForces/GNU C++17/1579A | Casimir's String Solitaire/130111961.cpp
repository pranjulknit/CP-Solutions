/*   *************
     *           *
     *           *
     *           *
     *************       Learning..............   
     *
     *
     *
     *
     *                  
 
*/
 
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <cstring>
 
#define test(t) while(t--)
 
#define ll  long long int
 
#define in  cin>>
#define out cout<<
#define en "\n"
#define sp " "
 
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0);
 
 const long long int MOD = 1000000007;
 
using namespace std;
 
 
ll get_fibonacci_huge(ll n){
 
   ll v[n]={0};
   v[0] = 0;
   v[1] =1;
   for(ll i=2;i<=n;i++){
    v[i] = v[i-1] + v[i-2];
   }
   return v[n];
 
}
 
 
const int number_check_prime = 1000000;
 
bitset<number_check_prime+5> b;
vector<ll> primes;
 
void sieve() {
 
    b.set();
    b[0] = b[1] = 0;
 
    for(ll i=2;i<=number_check_prime;i++){
        if(b[i]){
            primes.push_back(i);
            for(ll j = i*i;j<=number_check_prime;j+=i){
                b[j] = 0;
            }
        }
    }
}
 
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (b.second < a.second);
}
 
 
bool sortbyfirst(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (b.first < a.first);
}
 
bool decreasing(const ll &a, const ll &b){
   return a>b;
}
 
 
ll profit(ll n, ll total, ll *time, ll *marks){
 
    if(n==3 || total==0){
        return 0;
    }
 
 
    // rec case
 
    ll ans = 0;
    ll inc,exc;
 
    inc = exc = 0;
 
     ll number =20;
     
     
    if(number*time[n] <= total)
    inc = number*marks[n] + profit(n+1,(total-number*time[n]),time,marks);
    else{
     // cout<<"number "<<number<<"time "<<time[n]<<"total"<<"\n";
       while(number*time[n]>total){
            number--;
 
     }
 
      // cout<<"number "<<number<<"* mark[n-1]"<<marks[n-1]<<"\n";
         inc = number*marks[n] + profit(n+1,(total-number*time[n]),time,marks);
    }
     //cout<<"inc "<<time[n-1]<<"\n";
 
    
    exc = profit(n+1,total,time,marks);
     
 
 
    ans = max(inc,exc);
 
   // cout<<ans<<"\n";
 
    return ans;
 
 
}
 
map<long long int, long long int> dp;
 
long long int fib(long long int n) {
   if (dp.count(n)) return dp[n];
   long long int k=n/2;
   if (n%2==0) { 
      return dp[n] = (fib(k)*fib(k) + fib(k-1)*fib(k-1)) % MOD;
   } else { 
      return dp[n] = (fib(k)*fib(k+1) + fib(k-1)*fib(k)) % MOD;
   }
}
 
int main(){ fast()
          #ifndef   ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
          #endif
 
 
 
ll t;
 
cin>>t;
 
while(t--){
   string  s;
 
   cin>>s;
   ll cnta = 0;
   ll cntb = 0;
   ll cntc = 0;
   for(ll i=0;i<s.size();i++){
      if(s[i]=='A'){
         cnta++;
      }
      else if(s[i]=='B'){
         cntb++;
      }
      else{
         cntc++;
      }
   }
 
   if(cnta){
      if(cnta == cntb && cntc  == 0){
         cout<<"YES"<<"\n";
      }
      else if(cntb > cnta){
         if(cntb-cnta == cntc){
            cout<<"YES"<<"\n";
         }
         else
            cout<<"NO"<<"\n";
      }
      else{
         cout<<"NO"<<"\n";
      }
   }
   else if(cntb){
      if(cntb ==cntc){
         cout<<"YES"<<"\n";
      }
      else
         cout<<"NO"<<"\n";
   }
   else{
      cout<<"NO"<<"\n";
   }
}
  
  
 
return 0;}