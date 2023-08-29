#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n+1);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            if(temp<=n)a[temp]++;
        }
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                mp[j]+=a[i];
            }
        }
        /*
        ?for first test case
        *for i=1
        mp[1]=mp[1]+a[1]=0+1=1
        mp[2]=mp[2]+a[1]=0+1=1
        mp[3]=mp[3]+a[1]=0+1=1
        mp[4]=mp[4]+a[1]=0+1=1
        *for i=2
        mp[2]=mp[2]+a[2]=1+1=2
        mp[4]=mp[4]+a[2]=1+1=2
        mp[6]=mp[6]+a[2]=0+1=1
        mp[8]=mp[8]+a[2]=0+1=1
        *for i=3
        mp[3]=mp[3]+a[3]=1+1=2
        mp[6]=mp[6]+a[3]=1+1=2
        mp[9]=mp[9]+a[3]=0+1=1
        mp[12]=mp[12]+a[3]=0+1=1
        *for i=4
        mp[4]=mp[4]+a[4]=2+1=3
        mp[8]=mp[8]+a[4]=1+1=2
        mp[12]=mp[12]+a[4]=0+1=1
        mp[16]=mp[16]+a[4]=0+1=1
        *for i=5
        mp[5]=mp[5]+a[5]=1+1=2
        mp[10]=mp[10]+a[5]=1+1=2
        mp[15]=mp[15]+a[5]=0+1=1
        mp[20]=mp[20]+a[5]=0+1=1
        ?for second test case
        *for i=1
        mp[2]=mp[1]+a[1]=0+0=0
        mp[4]=mp[4]+a[1]=0+0=0
        *for i=2
        mp[2]=mp[2]+a[2]=0+3=3
        mp[4]=mp[4]+a[2]=0+3=3
        *for i=3
        mp[2]=mp[2]+a[3]=0+0=0
        mp[4]=mp[4]+a[3]=0+0=0
        */
        int mx=0;
        for(auto ans:mp){
            mx=max(ans.second,mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}




// void solve()
// {
//     ll n;cin>>n;
//     vector<ll>v(n+1,0);
//     map<int,int>mp;
//     for (int i = 0; i < n; ++i)
//     {
//     	int temp;cin>>temp;
//     	if(temp<=n)
//     	v[temp]++;
//     }
    
//     for(int i=1;i<=n;i++)
//     {
//     	for(int j=i;j<=n;j+=i)
//     	{
//     		mp[j]+=v[i];
//     	}
//     }
//     int mx=0;
//     for(auto i : mp)
//     {
//     	if(i.first<=n)
//     	mx=max(mx,i.second);
//     }
//     cout<<mx<<endl;
// }
 