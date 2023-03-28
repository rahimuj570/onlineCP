#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

vector<int> graph[1000];
bool vis[1000];

void dfs(int start){
        vis[start]=true;
        cout<<start<<' ';
        for(int adj: graph[start]){
                if(vis[adj]==false){
                        dfs(adj);
                }
        }
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int n,x,y;
        cin>>n;
        for(int i=0; i<n; i++){
                cin>>x>>y;
                graph[x].push_back(y);
                graph[y].push_back(x);
        }
        dfs(7);

return 0;}