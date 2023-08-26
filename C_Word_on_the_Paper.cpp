#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        queue<char>q;
        for(int i=0;i<8;i++){
            string s;cin>>s;
            for(int j=0;j<8;j++){
                if(s[j]!='.'){
                    q.push(s[j]);
                }
            }
        }
        while(!q.empty()){
            cout<<q.front();
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}