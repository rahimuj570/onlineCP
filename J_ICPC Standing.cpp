#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}


int main(){
    init_code();
    int t,p,r,s;
    cin>>t;
    int i=1;
    while(i<=t){
        cin>>p>>s>>r;
        if(p==s && r>1)cout<<"Case "<<i<<": No\n";
        else cout<<"Case "<<i<<": Yes\n";
        i++;
    }

return 0;}