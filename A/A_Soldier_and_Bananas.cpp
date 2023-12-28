#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int k,w,n;cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++){
        sum+=k*i;
    }
    if(sum<=n)cout<<0;
    else cout<<sum-n;
    return 0;
}