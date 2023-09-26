#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef pair<char,char>pcc;
#define ll long long
int main(){
    int n;cin>>n;
    char c,s;cin>>c>>s;
    map<pcc,int>st;
    st[{c,s}]++;
    char prev=s;
    n=n-2;
    while(n--){
        cin>>c;
        st[{prev,c}]++;
        prev=c;
    }
    int mx=INT_MIN;
    char a,b;
    for(auto it=st.begin();it!=st.end();it++){
        if(mx<it->second){
            mx=it->second;
            a=it->first.first;
            b=it->first.second;
        }
    }
    cout<<a<<b;
    return 0;
}