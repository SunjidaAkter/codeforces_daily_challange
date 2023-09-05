#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n,sum=0;cin>>n;
    while(n--){
        int x,y;cin>>x>>y;
        if(x<y&&y!=0&&(y-x>=2))sum++;
    }
    cout<<sum;
    return 0;
}