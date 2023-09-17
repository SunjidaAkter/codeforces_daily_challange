#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int a;
        char b;
        cin>>a>>b;
        string s;
        cin>>s;
        bool f=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>=b||f){
                cout<<s[i];
                }else{
                    cout<<b<<s[i];
                    f=1;
               }
        }
        if(!f){
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}