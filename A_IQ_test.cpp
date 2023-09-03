#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if((a[0]-a[1])%2!=0 && (a[1]-a[2])%2==0)cout<<1;
    else if(((a[n-1]-a[n-2])%2!=0) &&((a[n-2]-a[n-3])%2==0))cout<<n;
    else
    for(int i=0;i<n-2;i++){
        if(((a[i]-a[i+1])%2!=0)&&((a[i+1]-a[i+2])%2!=0)){
            cout<<i+2;
            break;
        }
    }
    return 0;
}