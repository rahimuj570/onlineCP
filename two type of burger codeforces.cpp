#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;


int differ(string s, string s2, int sz){
        int res=0;
        for(int i=0; i<sz; i++)res+=abs(s[i]-s2[i]);
        return res;
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int t;
        cin>>t;
        while(t--){
                int bun,buf,chick,bufP,chickP,fst=0,snd=0;
                cin>>bun>>buf>>chick>>bufP>>chickP;
                int bunSet=(int)bun/2;
                if(chickP>bufP){
                        if(chick>=bunSet){fst=bunSet;bunSet=0;}
                        else{
                                bunSet-=chick;
                                fst=chick; 
                        }
                        if(bunSet){
                               if(buf>=bunSet){snd=bunSet;bunSet=0;}
                        else{
                                bunSet-=buf;
                                snd=buf; 
                        } 
                        }
                }else{
                        if(buf>=bunSet){snd=bunSet;bunSet=0;}
                        else{
                                bunSet-=buf;
                                snd=buf; 
                        }
                        if(bunSet){
                               if(chick>=bunSet){fst=bunSet;bunSet=0;}
                        else{
                                bunSet-=chick;
                                fst=chick; 
                        } 
                        }
        }
                cout<<fst*chickP+snd*bufP<<endl;}
return 0;}