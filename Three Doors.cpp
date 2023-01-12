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


int t,x,a,b,c;
cin>>t;
for(int i=0; i<t; i++){
  cin>>x>>a>>b>>c;
  if(x==1){
    if(a==0)cout<<"NO"<<endl;
    else if(a==2 && b!=0 || a==3 && c!=0)cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;}
    else if(x==2){
      if(b==0)cout<<"NO"<<endl;
      else if(b==1 && a!=0|| b==3 && c!=0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else{
      if(x==3 && c==0)cout<<"NO"<<endl;
      else if(c==1 && a!=0 || c==2 && b!=0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}


///////////////////////////////////////////////
   return 0;
}


