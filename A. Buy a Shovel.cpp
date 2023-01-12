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


int i,n,r,stop=0,totalTk;
cin>>n>>r;
for(i=1;stop==0;i++){
  if(n%10==0){break;}
  else{
    totalTk=n*i;
    if(totalTk%10==0||(totalTk-r)%10==0)stop=1;
  }
}
i-=1;
i?cout<<i:cout<<1;


///////////////////////////////////////////////
   return 0;
}


