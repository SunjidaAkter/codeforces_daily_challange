#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        int d=-1;
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')%2==0){
                d=i;
                break;
            }
        }
        if((s[s.size()-1]-'0')%2==0)cout<<0<<endl;
        else if(d==-1)cout<<-1<<endl;
        else if(d==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}