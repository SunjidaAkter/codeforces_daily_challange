#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int n,sum=0,s1=0;cin>>n;
    bool flag=true;
    while(n!=0){
        if(n%10!=7&&n%10!=4){
            // cout<<n%10<<"K";
            
            sum++;
        }
        n/=10;
        s1++;
    }
    if(sum==s1)cout<<"YES";
    else {
        if(n%4==0||n%7==0){
            cout<<"YES";
        }else cout<<"NO";    
    }
    return 0;
}