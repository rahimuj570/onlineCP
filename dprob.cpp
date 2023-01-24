#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}

void isprimes(int n, int m){
    bool prime[m+1];
    for(int p=2; p*p<=m; p++){
        if (prime[p]==false){
            for(int j=p*p; j<=m; j+=p){
                prime[j]=true;
            }
        }
    }

    for (int q=n; q<=m; q++){
        if (prime[q]==false && q!=1){
            cout << q << ' ';
        }
    }
}

int main(){
    init_code();
    int t;
    cin>>t;
    for (int k=0; k<t; k++) {
        int m,n;
        cin>>n>>m;
        isprimes(n,m);
        cout<<endl;
    }
    return 0;
}