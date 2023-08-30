#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int x,y;cin>>x>>y;
    int cnt=0;
    while(x<=y){
        x*=3;y*=2;cnt++;
    }
    cout<<cnt;
    return 0;
}