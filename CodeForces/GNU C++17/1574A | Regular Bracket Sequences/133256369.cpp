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
 
 const long long int MOD = 1e9;
 
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
 
 
const int number_check_prime = 100000005;
 
bitset<number_check_prime+5> b;
vector<ll> primes;
 
void sieve() {
 
    b.set();
    b[0] = b[1] = 0;
    b[2]=1;
    primes.push_back(2);
    for(ll i=3;i<=number_check_prime;i+=2){
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
 
 
 
// multiplying two matrixes
int k;
vector<vector<ll>> multiply(vector<vector<ll>> A,vector<vector<ll>> B){
   //storing result in third matrix;
   vector<vector<ll>> C(k+1,vector<ll> (k+1));
 
   for(int i=1;i<=k;i++){
      for(int j=1;j<=k;j++){
         for(int x=1;x<=k;x++){
            C[i][j] = (C[i][j]+ (A[i][x]*B[x][j])%MOD)%MOD;
         }
      }
   }
 
   return C;
}
 
 
 
 
 
vector<vector<ll>> pow(vector<vector<ll>>A,ll p){
   // base
   if(p==1){
      return A;
   }
   // Rec
   if(p&1){
      return multiply(A,pow(A,p-1));
   }
   else{
      vector<vector<ll>> X = pow(A,p/2);
      return multiply(X,X);
   }
}
 
 
ll aPowerb(ll a,ll b,ll mod_){
     ll ans = 1ll;
     while(b>0){
      if(b&1){
        // ans = (ans*a);
         ans = (ans*a) % mod_;
      }
      //a = a*a;
      a = (a*a)%mod_;
      b = b>>1;
 
   }
 
 
   return ans;
}
 
 
 
 
 
int main(){ fast()
         #ifndef   ONLINE_JUDGE
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
          #endif
 
 
 
ll t;       
 
cin>>t;
 
while(t--){
   ll n;
 
   cin>>n;
   
  for(ll i=1;i<=n;i++){
   ll j=i;
    while(j--){
      cout<<"(";
    }
    j=i;
    while(j--){
      cout<<")";
    }
 
    j=n-i;
    while(j--){
      cout<<"()";
    }
    cout<<"\n";
  }
}
 
return 0;
}
 
 