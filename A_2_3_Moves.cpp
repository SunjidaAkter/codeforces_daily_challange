#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        if(n==1)cout<<2<<endl;
        else if(n%3==0)cout<<(n/3)<<endl;
        else cout<<(n/3)+1<<endl;
    }
    return 0;
}