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
ll n,box;
std::map<ll, ll> mp;
cin>>n;
while(n--){
        cin>>box;
        mp[box]++;
}
// std::vector<pair<ll,ll>> v(mp.begin(), mp.end());
// sort(v.begin(), v.end(),cmp);
// for(auto i:v)cout<<i.first<<' '<<i.second<<endl;
ll res=mp.begin()->second;
for(auto it=mp.begin(); it!=mp.end(); it++){
        res=max(res,it->second);
}
cout<<res;
return 0;}