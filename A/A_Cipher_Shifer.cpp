#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;cin>>n;
        string st,s;cin>>s;
        for(int i=0;i<n;i++){
            st+=s[i];
            char c=s[i++];
            while(c!=s[i])i++;
        }
        cout<<st<<endl;
        
    }
    return 0;
}
//* what i learnt
//*kono string er char k tar porer char er sathe tulona korar system