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
        *for i=1//1cm laf er bang achhe akta r eder jonno nicher trap
        mp[1]=mp[1]+a[1]=0+1=1//*1 number trap e 1cm hop er jonno 1 ta frog atkabe
        mp[2]=mp[2]+a[1]=0+1=1//*2 number trap e 1cm hop er jonno 1 ta frog atkabe
        mp[3]=mp[3]+a[1]=0+1=1//*3 number trap e 1cm hop er jonno 1 ta frog atkabe
        mp[4]=mp[4]+a[1]=0+1=1//*4 number trap e 1cm hop er jonno 1 ta frog atkabe
        *for i=2//2cm laf er bang achhe akta r eder jonno nicher trap
        mp[2]=mp[2]+a[2]=1+1=2//*2 number trap e 2cm hop er jonno 1 ta r 1cm hop er jonno 1ta silo total 2ta frog atkabe
        mp[4]=mp[4]+a[2]=1+1=2//*4 number trap e 2cm hop er jonno 1 ta frog atkabe
        mp[6]=mp[6]+a[2]=0+1=1//*6 number trap e 2cm hop er jonno 1 ta frog atkabe
        mp[8]=mp[8]+a[2]=0+1=1//*8 number trap e 2cm hop er jonno 1 ta frog atkabe
        *for i=3//3cm laf er bang achhe akta r eder jonno nicher trap
        mp[3]=mp[3]+a[3]=1+1=2//*3 number trap e 3cm hop er jonno 1 ta total 2 ta frog atkabe
        mp[6]=mp[6]+a[3]=1+1=2//*6 number trap e 3cm hop er jonno 1 ta r 2cm hop er jonno 1ta silo total 2ta frog atkabe
        mp[9]=mp[9]+a[3]=0+1=1//*9 number trap e 3cm hop er jonno 1 ta frog atkabe
        mp[12]=mp[12]+a[3]=0+1=1//*12 number trap e 3cm hop er jonno 1 ta frog atkabe
        *for i=4//4cm laf er bang achhe akta r eder jonno nicher trap
        mp[4]=mp[4]+a[4]=2+1=3//*4 number trap e 4cm hop er jonno 1 ta r 2cm hop er jonno 1ta silo r 4cm hop er jonno 1ta silo total 3ta frog atkabe
        mp[8]=mp[8]+a[4]=1+1=2//*8 number trap e 4cm hop er jonno 1 ta r 4cm hop er jonno 1ta silo total 2ta frog atkabe
        mp[12]=mp[12]+a[4]=1+1=2//*12 number trap e 4cm hop er jonno 1 ta r 3cm hop er jonno 1ta silo total 2ta frog atkabe
        mp[16]=mp[16]+a[4]=0+1=1//*16 number trap e 1cm hop er jonno 1 ta frog atkabe
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


//*what i learnt
// k koto poriman laf dite pare oi frog er poriman ber korse
// ak dhoroner lafer jonno koita kore kon kon jaigai trap dite hobe seta ber korse
// highest frog atkanor trap ans