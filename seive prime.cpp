#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back

vector<int>primeList;
void seive(int n, bool prime[]){
        prime[0]=true;
        prime[1]=true;
        for(int i=2; i*i<=n; i++){
                if(prime[2]==false){
                        for(int j=i*i; j<=n; j+=i){
                                if(prime[j]==false)prime[j]=true;
                        }
                }
        }
        for(int i=2; i<=n; i++){
                if(prime[i]==false)primeList.pb(i);
        }
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
        int n;
        cin>>n;
        bool prime[n+1];
        memset(prime,false,sizeof(prime));
        primeList.clear();
        seive(n,prime);
        for(int i:primeList)cout<<i<<endl;

return 0;}