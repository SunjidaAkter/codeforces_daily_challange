#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<int>b(n);b[0]=1;
        for(int i=1;i<n;i++){
            b[i]=max(a[i],b[i-1]+1);
            cout<<b[i]<<" ";
        }
        cout<<b[n-1]+1<<endl;
    }
    return 0;
}