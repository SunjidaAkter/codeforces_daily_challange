#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n,m,k,h;cin>>n>>m>>k>>h;
    vector<int>v(n);int sum=0;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++){
            // cout<<abs(h-v[i])<<" "<<(abs(m-j))*k<<" "<<nl;
            if(h!=v[i]&&(abs(h-v[i])==(abs(m-j))*k)){
                sum++;
                break;
            }
        }
    }
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}