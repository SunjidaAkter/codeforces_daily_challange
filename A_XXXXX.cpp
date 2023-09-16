#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,x;cin>>n>>x;
        int a[n], pre[n];
        for(int i=0;i<n;i++)cin>>a[i];
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=a[i]+pre[i-1];
        }
        int mx=-1;
        for(int i=0;i<n;i++){
            if(pre[i]%x!=0){mx=max(i+1,mx);}
            if((pre[n-1]-pre[i])%x!=0){mx=max(mx,n-1-i);}
        }
        cout<<mx<<endl;
    }
    return 0;
}