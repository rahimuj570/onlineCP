#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

        bool prime(int n){
                if(n<=1)return false;
                if(n==2)return true;
                if(n<=3)return true;
                if(n%2==0)return false;
                for(int i=3; i*i<=n; i+=2){
                        if(n%i==0)return false;
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
int n;
cin>>n;
cout<<prime(n);



return 0;}