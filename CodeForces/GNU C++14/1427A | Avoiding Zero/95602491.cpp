#include <bits/stdc++.h>
#define ll  long long int
#define out  cout<<
 
using namespace std;
 
void DeleteAll(vector<ll>& data, const vector<ll>& deleteIndices)
{
    vector<bool> markedElements(data.size(), false);
    vector<ll> tempBuffer;
    tempBuffer.reserve(data.size()-deleteIndices.size());
 
    for (vector<ll>::const_iterator itDel = deleteIndices.begin(); itDel != deleteIndices.end(); itDel++)
        markedElements[*itDel] = true;
 
    for (size_t i=0; i<data.size(); i++)
    {
        if (!markedElements[i])
            tempBuffer.push_back(data[i]);
    }
    data = tempBuffer;
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==0)
            cout<<"NO"<<"\n";
        else{cout<<"YES"<<"\n";
        //if(sum>0)
        sort(a,a+n,greater<ll>());
        if(sum<0)
            reverse(a,a+n);
 
 
 
        //cout<<"YES"<<"\n";
        for(ll i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        }
    }
 
 
return 0;}