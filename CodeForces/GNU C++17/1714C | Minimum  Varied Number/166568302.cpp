// Problem: C. Minimum Varied Number
// Contest: Codeforces - Codeforces Round #811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)
 
 
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pll pair<ll,ll>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(),x.end()
#define alli(x,k) x.begin()+k,x.end()
 
 
using namespace std;
 
 
 
inline bool isSquare(ll x)
{
    ll y = sqrt(x);
    return y*y == x;
}
inline ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    gcd(b,a%b);
}
inline ll uppr_bound(vector<ll> &v,ll key)
{
    ll low = 0,high = v.size();
    while(low<high)
    {
        ll mid = low + (high-low)/2;
        if(v[mid]<=key)
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}
inline ll lowr_bound(vector<ll> &v,ll key)
{
    ll low = 0,high = v.size();
    while(low<high)
    {
        ll mid = low + (high-low)/2;
        if(v[mid]>=key)
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
}
inline ll form(ll n)
{
    return n*(n+1)/2;
}
#define line cout<<"line"<<endl
 
//power of large number
 
 
int main()
{
 
    ll t;
    cin>>t;
 
 
    while(t--)
    {
        ll n;
        cin>>n;
 
 
        if(n>=1 and n<=9)
        {
            cout<<n<<endl;
            continue;
        }
 
        string ans = "";
        bool yes= false;
        for(ll i = 1; i<=8; i++)
        {
            for(ll j=i+1; j<=9; j++)
            {
                if(i+j == n)
                {
                    ans += (i+'0');
                    ans +=(j+'0');
 
                    yes= true;
                    break;
                }
            }
            if(yes)
            {
                break;
            }
        }
 
 
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
 
        for(ll i=1; i<=7; i++)
        {
            for(ll j=i+1; j<=8; j++)
            {
                for(ll k= j+1; k<=9; k++)
                {
                    if(i+j+k == n)
                    {
                        ans += (i+'0');
                        ans +=(j+'0');
                        ans +=(k+'0');
                        yes= true;
                        break;
                    }
                }
                if(yes)
                {
                    break;
                }
            }
            if(yes)
            {
                break;
            }
        }
 
 
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
        for(ll i=1; i<=6; i++)
        {
            for(ll j=i+1; j<=7; j++)
            {
                for(ll k=j+1; k<=8; k++)
                {
                    for(ll l = k+1; l<=9; l++)
                    {
                        if(i+j+k+l == n)
                        {
                            ans += (i+'0');
                            ans +=(j+'0');
                            ans +=(k+'0');
                            ans +=(l+'0');
                            yes= true;
                            break;
                        }
                    }
                    if(yes)
                    {
                        break;
                    }
                }
                if(yes)
                {
                    break;
                }
            }
            if(yes)
            {
                break;
            }
 
 
        }
 
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
        for(ll i=1; i<=5; i++)
        {
 
            for(ll j=i+1; j<=6; j++)
            {
                for(ll k=j+1; k<=7; k++)
                {
                    for(ll l = k+1; l<=8; l++)
                    {
                        for(ll m=l+1; m<=9; m++)
                        {
                            if(i+j+k+l+m==n)
                            {
                                ans += (i+'0');
                                ans +=(j+'0');
                                ans +=(k+'0');
                                ans +=(l+'0');
                                ans +=(m+'0');
                                yes= true;
                                break;
                            }
 
                        }
                        if(yes)
                        {
                            break;
                        }
 
                    }
                    if(yes)
                    {
                        break;
                    }
 
                }
                if(yes)
                {
                    break;
                }
 
            }
            if(yes)
            {
                break;
            }
 
        }
 
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
 
 
 
        for(ll i=1; i<=4; i++)
        {
            for(ll j=i+1; j<=5; j++)
            {
                for(ll k=j+1; k<=6; k++)
                {
                    for(ll l = k+1; l<=7; l++)
                    {
                        for(ll m=l+1; m<=8; m++)
                        {
                            for(ll o=m+1; o<=9; o++)
                            {
                                if(i+j+k+l+m+o == n)
                                {
                                    ans += (i+'0');
                                    ans +=(j+'0');
                                    ans +=(k+'0');
                                    ans +=(l+'0');
                                    ans +=(m+'0');
                                    ans +=(o+'0');
                                    yes= true;
                                    break;
 
 
                                }
                            }
                            if(yes)
                            {
                                break;
                            }
                        }
                        if(yes)
                        {
                            break;
                        }
                    }
                    if(yes)
                    {
                        break;
                    }
                }
                if(yes)
                {
                    break;
                }
            }
            if(yes)
            {
                break;
            }
        }
 
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
        for(ll i=1; i<=3; i++)
        {
            for(ll j=i+1; j<=4; j++)
            {
                for(ll k=j+1; k<=5; k++)
                {
                    for(ll l = k+1; l<=6; l++)
                    {
                        for(ll m=l+1; m<=7; m++)
                        {
                            for(ll o=m+1; o<=8; o++)
                            {
 
                                for(ll p = o+1; p<=9; p++)
                                {
                                    if(i+j+k+l+m+o+p == n)
                                    {
                                        ans += (i+'0');
                                        ans +=(j+'0');
                                        ans +=(k+'0');
                                        ans +=(l+'0');
                                        ans +=(m+'0');
                                        ans +=(o+'0');
                                        ans +=(p+'0');
                                        yes= true;
                                        break;
 
 
                                    }
                                }
                                if(yes)
                                {
                                    break;
                                }
 
                            }
                            if(yes)
                            {
                                break;
                            }
                        }
                        if(yes)
                        {
                            break;
                        }
                    }
                    if(yes)
                    {
                        break;
                    }
                }
                if(yes)
                {
                    break;
                }
            }
            if(yes)
            {
                break;
            }
        }
 
 
 
 
 
 
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
 
 
 
 
        for(ll i=1; i<=2; i++)
        {
            for(ll j=i+1; j<=3; j++)
            {
                for(ll k=j+1; k<=4; k++)
                {
                    for(ll l = k+1; l<=5; l++)
                    {
                        for(ll m=l+1; m<=6; m++)
                        {
                            for(ll o=m+1; o<=7; o++)
                            {
 
                                for(ll p = o+1; p<=8; p++)
                                {
 
                                    for(ll q=p+1; q<=9; q++)
                                    {
                                        if(i+j+k+l+m+o+p+q == n)
                                        {
                                            ans += (i+'0');
                                            ans +=(j+'0');
                                            ans +=(k+'0');
                                            ans +=(l+'0');
                                            ans +=(m+'0');
                                            ans +=(o+'0');
                                            ans +=(p+'0');
                                            ans +=(q+'0');
                                            yes= true;
                                            break;
 
 
                                        }
                                    }
                                    if(yes)
                                    {
                                        break;
                                    }
 
 
                                }
                                if(yes)
                                {
                                    break;
                                }
 
                            }
                            if(yes)
                            {
                                break;
                            }
                        }
                        if(yes)
                        {
                            break;
                        }
                    }
                    if(yes)
                    {
                        break;
                    }
                }
                if(yes)
                {
                    break;
                }
            }
            if(yes)
            {
                break;
            }
        }
 
        if(yes)
        {
            cout<<ans<<endl;
            continue;
        }
 
 
 
       
 
 
        if(n==45)
        {
            cout<<"123456789"<<endl;
            continue;
        }
 
 
 
 
 
    }
 
 
 
 
 
 
    return 0;
}
 
 
 