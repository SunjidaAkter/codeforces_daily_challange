#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    int n;cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++)cin>>a[i];
    int sum=0;
    for(int i=0;i<n-1;i++)sum+=a[i];
    cout<<-(sum)<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}