#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
int a,b,dif=0,remain=0;
cin>>a>>b;
while(a!=0 && b!=0){
        a--;
        b--;
        dif++;
}
if(a!=0)remain=a/2;
if(b!=0)remain=b/2;
cout<<dif<<' '<<remain;
return 0;}