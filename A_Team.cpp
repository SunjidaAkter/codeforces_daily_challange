#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t,sum=0;cin>>t;
    while(t--){
        int s=0,x,y,z;cin>>x>>y>>z;
        if(x==1)s++;
        if(y==1)s++;
        if(z==1)s++;
        if(s>=2)sum++;
    }
    cout<<sum;
    return 0;
}