#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

bool cmp(pair<ll,ll>&p1,pair<ll,ll>&p2){
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
int n;
cin>>n;
string s;
std::map<string, int> mp;
while(n--){
        cin>>s;
        mp[s]++;
        if(mp[s]>1)cout<<"YES\n";
        else cout<<"NO\n";
}
// for(auto i:mp){cout<<i.first<<endl;}
return 0;}