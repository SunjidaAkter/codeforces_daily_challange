#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n,k;cin>>n>>k;
    ll odd=n/2+n%2;
    if(k<=odd)cout<<2*k-1<<'\n';
    else {
        k-=odd;
        cout<<2*k<<'\n';
    }
    return 0;
}