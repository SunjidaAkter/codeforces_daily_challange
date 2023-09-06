#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        stack<int>st;
        while(x!=0){
            st.push(x%2);
            // cout<<x%2<<"x";
            x/=2;
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}