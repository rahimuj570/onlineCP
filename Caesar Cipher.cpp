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
 
int sz,jump,tmp;
string str;
cin>>sz;
cin>>str;
cin>>jump;
for(int i=0; i<sz; i++){
        tmp=jump;
        if((int(str[i])>=65 && int(str[i])<=90) || (int(str[i])>=97 && int(str[i])<=122)){
                if(isupper(str[i])){
                        while(tmp>26){tmp-=26;}
                        if(int(str[i])+tmp>90){cout<<char((65+(int(str[i])+tmp-90))-1);}
                        else cout<<char(int(str[i])+tmp);
                }else{
                        while(tmp>26){tmp-=26;}
                        if(int(str[i])+tmp>122){cout<<char((97+(int(str[i])+tmp-122))-1);}
                        else cout<<char(int(str[i])+tmp);
                }
        }else cout<<str[i];
}
return 0;}

