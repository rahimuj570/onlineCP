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

        unordered_map<string,int>mp;
        mp["0"];
        unordered_map<string,string>mp2;
        int q,qt,y;
        string s;
        cin>>q;
        while(q--){
                cin>>qt;
                if(qt==1){
                        cin>>s>>y;
                        mp[s]=mp[s]+y;
                }else if(qt==2){
                        cin>>s;
                        mp.erase(s);
                }else{
                        cin>>s;
                        cout<<mp[s]<<endl;
                }
        }
return 0;}