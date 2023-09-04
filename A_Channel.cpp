#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int x,y,n,p;cin>>x>>y>>n;
        int pos=0,neg=0;
        string s;cin>>s;
        bool flag=false;
        p=y;
        for(int i=0;i<n;i++){
            if(s[i]=='+')pos++,y++;
            else y--;
            if(x==y)flag=true;
        }
        if(x==p || flag)cout<<"YES"<<endl;
        else if(p+pos>=x){
            cout<<"MAYBE"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}