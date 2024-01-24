#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int t,n;
        string s;
        cin>>t;
        while(t--){
                int res=1,cost=1;
                cin>>n;
                cin>>s;
                for(int i=0; i<n-1; i++){
                        if(s[i]==s[i+1])cost++;
                        else{
                                res=max(cost,res);
                                cost=1;
                        }
                }
                res=max(cost,res);
                db(++res);
        }

return 0;}