#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll c,n,x;
vector<ll>v(n);
int check(ll m){
    ll sum=0;
    for(ll i:v){
        sum+=(i+2*m)*(i+2*m);
        if(sum>c)return 1;
    }
    if(sum<c)return -1;
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>c;
        v.clear();
        for(int i=0;i<n;i++){
            cin>>x;v.push_back(x);
        }
        ll l=0,r=1e9,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(check(mid)==1)r=mid-1;
            else if(check(mid)==-1) l=mid+1;
            else break;
        }
        cout<<mid<<endl;
    }
    return 0;
}
//* what i learnt
//* akta range er middle value k w(final ans) er probable value dhore ota ke perfect korar jonno while loop chaliechhi;