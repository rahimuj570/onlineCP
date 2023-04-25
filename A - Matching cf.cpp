#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back
        #define nnn cout<<endl;

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

int t;
string s;
cin>>t;
        while(t--){
            cin>>s;
            int mul=1;
            int len=s.size();
            for(int i=0;i<len;i++){
                char c=s[i];
                if(c=='?'){
                    if(i==0){
                      mul=mul*9;
                    }else{
                        mul=mul*10;
                    }
                }
            }

            if(s[0]=='0')cout<<0<<endl;
            else cout<<mul<<endl;}
            return 0;}
        