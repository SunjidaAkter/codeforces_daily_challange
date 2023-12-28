#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    ll cnt=1;
    for(ll i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            cnt++;
        }else{
            cnt=1;
        }
        if(cnt==7)break;
    }
    if(cnt==7)cout<<"YES";
    else cout<<"NO";
    return 0;
}