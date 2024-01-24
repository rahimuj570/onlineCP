#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;


bool isLucky(int n){
        while(n>0){
                if(n%10==4 || n%10== 7);
                else {return false;}
                n/=10;
        }
        return true;
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

int n,flg=0;
cin>>n;
if(isLucky(n)){cout<<"YES\n"; return 0;}
for(int i=4; i<n; i++){
        if(isLucky(i) && n%i==0){flg=1;break;}
}
if(flg)cout<<"YES\n";
else cout<<"NO\n";
return 0;}