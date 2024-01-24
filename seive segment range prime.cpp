#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

std::vector<int> sqrtPrime;
void seive(ll n){
        bool vis[n];
        memset(vis,false,n);
        vis[0]=vis[1]=true;
        for(int i=2; i*i<=n; i++){
                if(vis[i]==false){
                        for(int j=i*i; j<=n; j+=i){
                                vis[j]=true;
                        }
                }
        }
        for(int i=2; i<=n; i++)if(!vis[i])sqrtPrime.push_back(i);
}

// std::vector<int> rangePrime;
void rangeSeive(ll l, ll r){
        if(l==1)l++;
        bool vis[(r-l)+1];
        memset(vis,false,(r-l)+1);
        for(int i:sqrtPrime){ 
                                                        ///////////////////////
                int temp=(l/i)*i;///////////////////////////// ALGO
                                                        ///////////////////////
                if(temp<l)temp+=i;
                for(int j=temp; j<=r; j+=i){
                        if(temp!=i){
                                vis[j-l]=true;
                        }
                }
        }
        for(int i=0; i<=r-l; i++)if(!vis[i])cout<<l+i<<' ';
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        ll l,r;
        cin>>l>>r;
        seive((int)sqrt(r));
        rangeSeive(l,r);


return 0;}