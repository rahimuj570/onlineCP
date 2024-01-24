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

a=0, b=1,       res= |1 0|        base= |0 1|
                     |0 1|              |1 1|

                     to find n=100 fibo, need power of n-1=100 sqr of base * a&b

/////////////*/






int res[2][2]={{1,0},{0,1}};
int base[2][2]={{0,1},{1,1}};
int mod=1000000007;

void mult(int arr[][2], int arr2[][2]){
        int temp[2][2],tempV;
        memset(temp,0,sizeof(temp));
        for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                        for(int k=0; k<2; k++){
                                tempV=(arr[i][k]*arr2[k][j])%mod;
                                temp[i][j]+=tempV;
                        }
                }
        }
        for(int i=0; i<2; i++)for(int j=0; j<2; j++)arr[i][j]=temp[i][j];
}

void check_power(int n){
        while(n){
                if(n%2==0){
                        n/=2;
                        mult(base,base);
                }else{
                        n--;
                        mult(res,base);
                }
        }
}
int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int a=0,b=1,n;
        cin>>n;
        n--;
        check_power(n);
        cout<<res[0][1];
return 0;}