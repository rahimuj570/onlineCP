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


int t,a,b,n,stop=0,count=0;
cin>>t;
for(int i=0; i<t; i++){
  cin>>a>>b>>n;
  while(stop!=1){
    if(a<b)a+=b;
    else b+=a;
    count++;
    if(a>n || b>n)stop=1;
  }
  cout<<count<<endl;
  count=0;
  stop=0;
}



///////////////////////////////////////////////
   return 0;
}


