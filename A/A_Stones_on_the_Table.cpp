#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,cnt=0;cin>>n;
    vector<char>v;
    for(int i=0;i<n;i++){
        char x;cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1])cnt++;
    }
    cout<<cnt;
    return 0;
}