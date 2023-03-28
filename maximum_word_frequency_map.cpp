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
char s[1000];
gets(s);
unordered_map<string,int>m;
char* token=strtok(s," ");
while(token!=0){
        m[token]++;
        token=strtok(0," ");
}
std::vector<pair<string,int>> v(m.begin(), m.end());
sort(v.begin(), v.end(),cmp);
cout<<v[0].first<<"==>"<<v[0].second;

return 0;}