#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;



int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int a,b,mins=0,maxs=0,ctA=0,ctB=0;
        cin>>a>>b;
        mins=min(b,a);
        maxs=max(a,b);
        while(1){
                if(maxs==mins){break;}
                mins++;
                ctA++;
                if(mins==maxs){break;}
                else{maxs--;ctB++;}
        }
        int res=((ctA*(ctA+1))/2)+((ctB*(ctB+1))/2);
        cout<<res<<endl;
return 0;}