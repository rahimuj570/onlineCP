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

        int t,x,k;
        cin>>t;
        while(t--){
                cin>>x>>k;
                if(x%k!=0){
                        db(1)
                        db(x)
                }else{
                        db(2)
                        cout<<--x<<' '<<1<<endl;
                }
        }

return 0;}