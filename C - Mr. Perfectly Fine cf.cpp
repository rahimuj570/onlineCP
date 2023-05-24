#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

int binDec(string s){
        int n=stoi(s),i=0,dec=0,rem;
        while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
  }
return dec;}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int t,skill;
        ll m;
        string s;
        cin>>t;
        while(t--){
                ll n,mint1=INT_MAX,mint2=INT_MAX,minall=INT_MAX;
                cin>>n;
                while(n--){
                        cin>>m;
                        cin>>s;
                        skill=binDec(s);
                        if(skill==0){continue;}
                        if(skill==1){
                                mint1=min(mint1,m);
                        }else if(skill==2){
                                mint2=min(mint2,m);
                        }
                        if(skill==3)minall=min(minall,m);
                }
                ll mintSum=mint2+mint1;
                if((mint2==INT_MAX || mint1==INT_MAX) && minall==INT_MAX)db(-1)
                else if(mintSum<minall)db(mintSum)
                else db(minall)
        }
return 0;}