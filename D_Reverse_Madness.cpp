#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int l[k],r[k];
        for(int i=0;i<k;i++)cin>>l[i];
        for(int i=0;i<k;i++)cin>>r[i];
        int q;cin>>q;
        int x[q];
        for(int i=0;i<q;i++)cin>>x[i];
        for(int i=0;i<q;i++){
            for(int j=0;j<k;j++){
                if(x[i]>=l[j]&&x[i]<=r[j]){
                    // cout<<x[i]<<"swap";
                    swap(s[min(x[i],l[j]+r[j]-x[i])],s[max(x[i],l[j]+r[j]-x[i])]);
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}