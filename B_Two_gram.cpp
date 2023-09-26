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
    int mx=INT_MIN;vector<pcc>ss;
    for(auto it=st.begin();it!=st.end();it++){
        if(mx<it->second){
            mx=it->second;
            ss.push_back(it->first);
        }
    }
    cout<<ss[ss.size()-1].first<<ss[ss.size()-1].second;
    return 0;
}