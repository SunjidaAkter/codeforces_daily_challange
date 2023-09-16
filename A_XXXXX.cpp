#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,x;cin>>n>>x;
        vector<int>v;int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int val:a)if(val%x!=0)v.push_back(val);
        if(v.size()>0)cout<<v.size()<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}