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
        //////////////////////////////////
int sc[3], bl[3],fold=0, stop=0,possible=0;
int T;
cin>>T;
while(T--){
        possible=1;
        fold=0,stop=0,possible=0;
for(int i=0; i<3; i++)cin>>sc[i];
        sort(sc,sc+3);
for(int i=0; i<3; i++)cin>>bl[i];
        sort(bl,bl+3);
if((bl[2]==sc[2] && bl[0]==sc[0] && bl[1]==sc[1]))cout<<0<<endl;
else{
        while(bl[0]<sc[0]){   
                bl[0]*=2;
                bl[2]/=2;
                fold++;
                if(bl[0]>sc[0]){possible=0;break;}
                if(bl[2]==sc[2] || bl[0]==sc[0]){possible=1;break;}
        }
        possible?cout<<fold<<"\n":cout<<-1<<"\n";
}
}

return 0;}