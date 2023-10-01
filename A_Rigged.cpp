#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        vector<int> s(n);
        vector<int> e(n);
        for(int i=0;i<n;i++){
            cin>>s[i]>>e[i];
        }
        int x=s[0],y=e[0];
        s.erase(s.begin());
        e.erase(e.begin());
        map<int,int>mp;
        for(int i=0;i<n-1;i++){
            mp.insert({s[i],e[i]});
            // cout<<mp.begin()->first<<" "<<mp.begin()->second<<endl;
        }
        // reverse(mp.begin(),mp.end());
        for(int i=0;i<n-1;i++){
            // mp.insert({s[i],e[i]});
            cout<<mp.rbegin()->first<<" "<<mp.rbegin()->second<<endl;
            mp.erase(mp.end());
        }
        
    }
    return 0;
}