#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
int main(){
    int n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<ll,ll>mp;
    for(int i=0;i<n;i++)mp[arr[i]]++;
    vector<pii>v;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        ll a = it->second;
        ll b = it->first;
        v.push_back({a, b});
    }
    ll sum=0;
    ll p=v[0].first;
    for(int i=1;i<v.size();i++){
        ll a=v[i].first;
        sum+=min(a,p);
        p=max(p,a);
    }
    cout<<sum;
    return 0;
}