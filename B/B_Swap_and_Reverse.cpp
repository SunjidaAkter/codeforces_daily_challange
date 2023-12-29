#include<bits/stdc++.h>
using namespace std;
bool check(string &s)
{
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1])return true;
    }
    return false;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        while(check(s)){
            for (int i = 0; i <= n - k; i += k) {
                reverse(s.begin() + i, s.begin() + i + k);
            }

            // Then, apply the swap operation
            for (int i = 0; i < n - 1; i++) {
                if (k > 1 && s[i] > s[i + 2]) {
                    swap(s[i], s[i + 2]);
                }
            }
        }
    }
    return 0;
}