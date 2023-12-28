#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        string s;cin>>s;int ci=0,cj=s.size()-1;
        bool l=false,r=false;int s2=0, sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'&&!l)sum++;
            if(s[i]=='1'){
                l=true;
                ci=i;
                break;
            }
        }
        // cout<<ci<<"c";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0'&&!r)sum++;
            if(s[i]=='1'){
                r=true;
                cj=i;
                break;
            }
        }
        if(!l||!r)cout<<0<<endl;
        else{
            for(int i=ci;i<=cj;i++){
                if(s[i]=='1')s2++;
            }
            cout<<s.size()-(s2+sum)<<endl;
        }
    }
    return 0;
}