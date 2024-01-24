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





/////////////*/

ll mat[101][101];
ll res[101][101];
ll dim;
ll mod=1000000007;

void mult(ll arr[][101],ll arr2[][101]){
        ll temp[101][101],tempV;
        memset(temp,0,sizeof(temp));
        for(ll i=0; i<dim; i++){
                for(ll j=0; j<dim; j++){
                        for(ll k=0; k<dim; k++){
                                tempV=(arr[i][k]*arr2[k][j])%mod;
                                temp[i][j]=(temp[i][j]+tempV)%mod;
                        }
                }
        }
        for(ll i=0; i<dim; i++)for(ll j=0; j<dim; j++)arr[i][j]=temp[i][j];
}



void check_pow(ll power){
        while(power){
        if(power%2==0){
                power/=2;
                mult(mat,mat);
        }else{
                power--;
                mult(res,mat);
        }
}}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
memset(res,0,sizeof(res));
cin>>dim;
ll power;
for(ll i=0; i<dim; i++){
        for(ll j=0; j<dim; j++){
                if(i==j)res[i][j]=1;
                cin>>mat[i][j];
        }
}
cin>>power;
// cout<<power;
check_pow(power);
for(ll i=0; i<dim; i++){
        for(ll j=0; j<dim; j++){
                cout<<res[i][j]<<' ';

        }
}
return 0;}