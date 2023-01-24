#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}
int bigMod(int b,int p, int m){
        if(p==0)return 1;
        else if(p%2!=0){
            int x=b%m;
            int y=bigMod(b,p-1,m)%m;
            return (x*y)%m;
            }else{
                int x=bigMod(b,p/2,m)%m;
                return (x*x)%m;
                }
    }

int main(){
    init_code();
        long long int b,p,m,output;
        while(cin>>b>>p>>m){output=bigMod(b,p,m);
        cout<<output<<endl;}
return 0;}


