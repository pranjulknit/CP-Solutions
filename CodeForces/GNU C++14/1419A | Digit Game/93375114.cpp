#include <bits/stdc++.h>
#define ll  long long int
#define out  cout<<
 
using namespace std;
 bool isEve(char s){
    if(s == '2' || s=='4' || s=='6' || s=='8'|| s=='0')
        return true;
    return false;
 }
 
 
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll h[n] = {0};
    if(s.size()==1){
        if(isEve(s[0]))
            cout<<2<<endl;
        else
            cout<<1<<endl;
 
    }
    else{
    ll beveodd=0;
    ll beveeve=0;
    ll roddeve=0;
    ll roddodd=0;
    if(s.size()%2==0){
    for(ll i=1;i<s.size();i+=2){
        if(isEve(s[i]) == false)
            beveodd+=1;
 
    }
    beveeve=n/2 - beveodd;
     //cout<<"beve"<<beveeve<<" "<<"beveodd"<<beveodd<<endl;
    if(beveeve>0)
        cout<<2<<endl;
    else
        cout<<1<<endl;
    }
    else{
        for(ll i=0;i<s.size();i+=2){
        if(isEve(s[i]))
            roddeve+=1;}
     roddodd = n/2 - roddeve +1;
     if(roddodd>0)
        cout<<1<<endl;
    else
        cout<<2<<endl;
 
    }
    }
 
    }
return 0;}