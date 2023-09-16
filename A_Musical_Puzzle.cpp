#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        set<pair<char,char>>se;
        char c,s; cin >> c >> s;
        se.insert({c,s}); n-=2;//* {a,b}
        char prev = s;//* b
        while(n--){
            cin >> c; se.insert({prev, c});//* {b,a}
            prev = c;
        }
        cout << se.size() << endl;//* {{a,b},{b,a}}
    }
 
 
    return 0;
}