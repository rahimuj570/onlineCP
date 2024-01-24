#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;



/*/////////////

                        ALGO
                  
                BASE            POWER           RES
power==even     base*base       power/=2        same

power==odd      same            power--         res*base



for int overflow need mod 1000000007

/////////////*/


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        ll base,res=1,power,mod=1000000007;
        cin>>base>>power;
        while(power!=0){
                if(power%2==0){
                        base=(base*base)%mod;
                        power/=2;
                }else{
                        res=(res*base)%mod;
                        power--;
                }
        }
        cout<<res;
return 0;}