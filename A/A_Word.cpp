#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    string s;cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++){
        if(97<=s[i]&&s[i]<=122)l++;
        if(65<=s[i]&&s[i]<=90)u++;
    }
    if(l>=u){
        for(int i=0;i<s.size();i++){
            if(65<=s[i]&&s[i]<=90){
                s[i]=s[i]+32;
                cout<<s[i];
            }else cout<<s[i];
        }
    }else{
        for(int i=0;i<s.size();i++){
            if(97<=s[i]&&s[i]<=122){
                s[i]=s[i]-32;
                cout<<s[i];
            }else cout<<s[i];
        }
    }
    return 0;
}