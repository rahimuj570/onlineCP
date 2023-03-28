#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

bool cmp(pair<string,int>p1,pair<string,int>p2){
        if(p1.second<p2.second)return false;
        return true;
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
int n,m;
cin>>n>>m;
std::unordered_map<string, string> mp;
while(n--){
        string si,sip;
        cin>>si>>sip;
        mp[sip+';']=si;
}
while(m--){
        string si,sip;
        cin>>si>>sip;
        cout<<si<<' '<<sip<<" #"<<mp[sip]<<endl;
}

return 0;}