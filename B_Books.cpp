#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n,w;cin>>n>>w;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    for(int i=0;i<n;i++)v.push_back(a[i]);
    sort(v.begin(),v.end());
    int sum=0,cnt=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum<=w)cnt++;
        else break;
    }
    cout<<cnt;
    return 0;
}