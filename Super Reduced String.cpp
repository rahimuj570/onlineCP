#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
fast;
        // #ifndef ONLINE_JUDGE
        // freopen("inputf.in","r",stdin);
        // freopen("outputf.out","w",stdout);
        // #endif
        //////////////////////////////////
        string s;
        cin>>s;
        again:
        if(s.size()){
        for(int i=0; i<s.size()-1; i++){
                if(s[i]==s[i+1]){s.erase(i,2); goto again;}
        }}
        s.size()?cout<<s:cout<<"Empty String";

return 0;}