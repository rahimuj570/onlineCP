#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;


int differ(string s, string s2, int sz){
        int res=0;
        for(int i=0; i<sz; i++)res+=abs(s[i]-s2[i]);
        return res;
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int t;
        cin>>t;
        while(t--){
        int n,sz,res=INT_MAX;
                cin>>n>>sz;
                string str[n];
                for(int i=0; i<n; i++)cin>>str[i];
                for(int i = 0; i < n; ++i) {
                for(int j = i + 1; j < n; ++j) {
                res = min(res, differ(str[i], str[j],sz));}
        }
                cout<<res<<endl;
        }
return 0;}