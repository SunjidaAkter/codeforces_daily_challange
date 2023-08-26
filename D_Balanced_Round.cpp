#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int a[n];
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        int ans=1;
        vector<int>mx(n+1,0);
        mx[0]=1;
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]>x){
                mx[i]=1;
            }else{
                mx[i]=mx[i-1]+1;
            }
            ans=max(ans,mx[i]);
        }
        cout<<n-ans<<endl;
    }
    return 0;
}
//* ja shikhlam
//*mx[0]=1 dhorsi karon index start korsi 1 theke
//*array er majhe consecutively acceptable maximum length er jonno technique