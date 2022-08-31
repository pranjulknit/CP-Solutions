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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        ll cnt=0;
        ll median[3];
        for(ll i=0;i<n/2;i++){
         for(ll j=0;j<m/2;j++){
            median[0]=a[i][j];
            //cout<<median[0]<<endl;
            median[1]=a[i][m-1-j];
            //cout<<median[1]<<endl;
            median[2]=a[n-1-i][j];
            //cout<<median[2]<<endl;
            //median[3]=a[n-1-1][m-1-j];
            sort(median,median+3);
            cnt+=abs(median[1]-a[i][j])+abs(median[1]-a[i][m-1-j])+abs(median[1]-a[n-1-i][j])+abs(median[1]-a[n-1-i][m-1-j]);
          //cout<<abs(median[1]-a[i][j])<<" "<<abs(median[1]-a[i][m-1-j])<<" "<<abs(median[1]-a[n-1-i][j])<<" "<<abs(median[1]-a[n-1-1][m-1-j])<<endl;
        }
        }
        if(n&1)
        for(ll j=0;j<m/2;j++){
                ll rmx=max(a[n/2][j],a[n/2][m-1-j]);
           cnt+=abs(rmx-a[n/2][j])+abs(rmx-a[n/2][m-1-j]);
    }
    if(m&1)
        for(ll i=0;i<n/2;i++){
                ll cmx=max(a[i][m/2],a[n-1-i][m/2]);
           cnt+=abs(cmx-a[i][m/2])+abs(cmx-a[n-1-i][m/2]);
    }
 
 
    cout<<cnt<<"\n";
    }
 
 
return 0;}