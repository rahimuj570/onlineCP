#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}

int printOne(string str, int l, int r){
int count=0;
for(int i=l-1; i<r; i++){
    if(str[i]=='1')count++;
}
return count;}

string dnaStr(string str){
    string result;
    string rev;
    string str2;
        rev=str;
        str2=str;
        reverse(rev.begin(), rev.end());
        for(int i=0; i<str2.size(); i++){
        if(str2[i]=='1')str2[i]='0';
        else str2[i]='1';
    }
        result=rev+str2+rev;
        return result;
}

int main(){
    init_code();
int t,q,l,r;
string str;

int tt=1;
cin>>t;
while(tt<=t){
    cout<<"Case "<<tt<<":\n";
    tt++;
    cin>>str;
    cin>>q;
        string finalResult[5000];
        finalResult[0]="100";
    for(int i=0; i<q; i++){
        if(i!=0){
        finalResult[i]=dnaStr(finalResult[i-1]);
    }}
    string str2=finalResult[0];
        for(int i=1; i<q; i++){str2+=finalResult[i];}
        for(int i=0; i<q; i++){
        cin>>l>>r;
        cout<<printOne(str2,l,r)<<'\n';}
    }

return 0;}