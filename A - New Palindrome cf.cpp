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

        int t;
        cin>>t;
        string s;
        // string s2;
        while(t--){
                int pos=0;
                cin>>s;
                int n=s.size()/2;
                for(int i=0; i<n-1; i++){
                        if(s[i]!=s[i+1]){
                                pos=1;
                                break;
                        }
                }
                if(pos==1)db("YES")
                else db("NO")

        }

return 0;}