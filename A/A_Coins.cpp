#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        if((n-k)%2==0||(n-2*k)%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
//* what i learnt
//* how to determin if there is any positive integer x and y so that we can make 2*x+k*y=n;