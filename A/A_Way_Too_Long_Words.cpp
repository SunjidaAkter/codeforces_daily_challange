#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        if(s.size()<=10)cout<<s<<endl;
        else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
    return 0;
}