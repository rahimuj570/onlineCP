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
int t,s,n,id,c,sc=1;
std::vector<pair<int,int>> v;
cin>>t;
while(t--){
        v.clear();
        int flag=0;
        cin>>s>>n;
        for(int i=0; i<n; i++){cin>>id>>c;v.push_back({id,c});}
        sort(v.begin(), v.end());
// for(int i=0; i<n; i++){
//         cout<<v[i].first<<' '<<v[i].second<<endl;
// }
        for(int i=0; i<n-1; i++){
                if(v[i].second==v[i+1].second && v[i].first==v[i+1].first){
                        flag=1;break;
                }
        }
        if(flag==1)cout<<"Scenario #"<<sc<<": impossible\n";
        else cout<<"Scenario #"<<sc<<": possible\n";
        sc++;
}

return 0;}