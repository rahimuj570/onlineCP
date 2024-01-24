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

        ll t,sz;
        string s;
        cin>>t;
        while(t--){
                char c='0';
                cin>>s;
                sz=s.size();
                for(int i=0; i<sz; i++){
                        if(s[i]=='?')s[i]=c;
                        else c=s[i];
                }
                db(s)
        }

return 0;}