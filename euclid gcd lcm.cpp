#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;





/*/////////////

                        ALGO
                  
gcd(a,b)==>gcd(b,a%b);


       a*b
Lcm= --------
       gcd


/////////////*/







ll gcd(ll a, ll b){
        if(b==0)return a;
        else return gcd(b,a%b);
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        ll a,b;
        cin>>a>>b;
        ll Gcd=gcd(a,b);
        ll Lcm=(a*b)/Gcd;
        cout<<Gcd<<endl;
        cout<<Lcm;

return 0;}