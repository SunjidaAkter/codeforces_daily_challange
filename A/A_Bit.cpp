#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    int n=0;
    while(q--){
        string s;cin>>s;
        for(int i=0;i<3;i++){
            if(s[i]=='+'){
                n++;
                break;
            }
            if(s[i]=='-'){
                n--;
                break;
            }
        }
    }
    cout<<n;
    return 0;
}