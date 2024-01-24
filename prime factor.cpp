#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

void primeFact(int n){
        for(int i=2; i*i<=n; i++){
                int count=0;
                while(n%i==0){
                        count++;
                        n/=i;
                }
                cout<<i<<'^'<<count<<endl;
        }
        if(n!=0)cout<<n<<'^'<<1<<endl;
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
        primeFact(n);

return 0;}