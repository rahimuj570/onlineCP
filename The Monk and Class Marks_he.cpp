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

int t,mark;
cin>>t;
string name;
map<int,multiset<string>>mp;
while(t--){
        cin>>name>>mark;
        mp[mark].insert(name);
}
// auto cur_elem=mp.end();
// while(cur_elem!=mp.begin()){
//         cur_elem--;
//         auto &names=(*cur_elem).second;
//         auto &number=(*cur_elem).first;
//         for(auto &elem:names){cout<<elem<<' '<<number<<endl;}
// }
for(auto it=mp.rbegin(); it!=mp.rend(); it++){
        for(auto elem:it->second)cout<<elem<<' '<<it->first<<endl;
}

return 0;}