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
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int>rv(n);
    for(int i=0;i<n;i++)rv[i]=v[i];
    sort(rv.begin(),rv.end());
    bool flag=true;
    for(int i=0;i<n;i++){
        if((v[i]%2!=0&&rv[i]%2==0)||(v[i]%2==0&&rv[i]%2!=0)){
            flag=false;
            break;
        }
    }
    if(flag)yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}