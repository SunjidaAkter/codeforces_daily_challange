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
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<int,int>pii;
bool cmp(pii a,pii b){
    return a.second<b.second;
}
void solve(){
    int n;cin>>n;
    vector<pii>a;   
    vector<int>v;
    forl(int,i,0,n){
        int x;cin>>x;
        a.push_back({x,i});
        v.push_back(n-i);
    }   
    sort(a.begin(),a.end());
    forl(int,i,0,n){
        a[i].first=v[i];
    }
    sort(a.begin(),a.end(),cmp);   
    forl(int,i,0,n){
        cout<<a[i].first<<" ";
    }
    cout<<nl;   
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}