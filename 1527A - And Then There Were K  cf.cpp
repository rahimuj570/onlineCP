#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

int t,n;
cin>>t;
while(t--){
        cin>>n;
        int temp=n;
        for(int i=0; i<32; i++){
                if(n>>i==1){
                        cout<<(1<<i)-1<<endl;
                        break;
                }
        }
}
return 0;}