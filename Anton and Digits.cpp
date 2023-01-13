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
////////////////////////////////////////////////

int a2,b3,c5,d6,n256=0,n32=0,stop256=0,stop32=0;
cin>>a2>>b3>>c5>>d6;
while(stop256==0||stop32==0){
if(a2&&c5&&d6){n256++;a2--,c5--,d6--;continue;}
else stop256=1;
if(b3&&a2){n32++;b3--,a2--;}
else stop32=1;}
cout<<n256*256+n32*32;

///////////////////////////////////////////////
   return 0;
}


