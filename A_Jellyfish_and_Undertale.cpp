#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll a,n;ll c;cin>>a>>c>>n;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]>=a)c+=(a-1);
            else c+=arr[i];    
        }
        cout<<c<<endl;
    }
    return 0;
}