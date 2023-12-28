// //? ekhane chaise j prottekta column e consecutively vika likha ase kina... like serial prothom column e v thakte hobe, ditio column e i thakte hobe , tritio column e k thakte hobe r tar porer colum e a thakte hobe

// //? jamon 5 number test case e prthom column e v achhe , ditio column e i nei but k ba a o nei.... dition column e i na thakleo tritio tar next column ei abar i achhe... trition column e kichu na thakleo 4th column e abar k achhe... erokom serial maintain kore last column abar a achhe...

// //? 4 number test case e first column e v achhe... 2nd column e i achhe .... but third column e kono k nai... tai etar ans no


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<set<char>>v(m);
        string str="vika";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char x;cin>>x;
                v[j].insert(x);//*vector er prothom set e prothom column dition set e ditio column dhukano hoise
            }
        }
        bool flag=false;
        int cnt=0;
        for(int i=0;i<m;i++){
            if(v[i].find(str[cnt])!=v[i].end()){//*check kortesi prottekta set e consecutively v,i,k,a ase kina... taholei check hoe jabe j prottekta column e consecutively v,i,k,a silo kina.... prottekta set e consecutively column dhukano hoise
                cnt++;
                if(cnt==4){
                    flag=true;
                    break;
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

