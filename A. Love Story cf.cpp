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

        int t,count;
        string code="codeforces";       
        char s[11];
        cin>>t;
        while(t--){
                count=0;
                for(int i=0; i<10; i++){
                        cin>>s[i];
                        if(s[i]!=code[i])count++;
                }
                db(count)
        }

return 0;}