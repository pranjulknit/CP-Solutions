#include <bits/stdc++.h>
#define ll long long int
 
 
using namespace std;
 
 
int main(){ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            string s;
            cin>>s;
            ll cnt= 0;
            for(ll i=n-1;i>=0;i--){
                if(s[i] == ')'){
                    cnt++;
                    continue;
                }
                else{
                    break;
                }
            }
            if(cnt>n-cnt){
                cout<<"Yes"<<"\n";
            }
            else
                cout<<"No"<<"\n";
        }
return 0;}