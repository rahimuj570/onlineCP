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

        int n;
        ll ans=1;
        cin>>n;
        for(int i=1; i<=n; i++){
                ans=(i*ans)%10000;
        }
        int size=log10(ans)+1;
        if(n>6){
        if(size==3)cout<<0<<ans<<endl;
        else if(ans==0)cout<<"0000"<<endl;
        else db(ans)
        }else db(ans)

return 0;}