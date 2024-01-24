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

        ll n;
        set<int>divisiors;
        cin>>n;
        divisiors.insert(1);
        for(int i=2; i*i<=n; i++){
                if(n%i==0){
                        divisiors.insert(i);
                        divisiors.insert(n/i);
                }
        }
        for(int i:divisiors)cout<<i<<' ';
return 0;}