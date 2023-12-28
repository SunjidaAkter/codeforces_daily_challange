#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    string s;cin>>s;
    set<int>st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()%2!=0)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}