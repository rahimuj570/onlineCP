#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

int n,e,u,v,ct=0;
std::vector<int> graph[1000];
bool vis[1000];

void dfs(int source){
        cout<<source<<' ';
        vis[source]=true;
        for(int adj:graph[source]){
                if(vis[adj]!=true)dfs(adj);
        }
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        cin>>n>>e;
        for(int i=0; i<e; i++){
                cin>>u>>v;
                graph[u].push_back(v);
                graph[v].push_back(u);
        }

for(int i=1; i<=n; i++){
                if(vis[i]==0){dfs(i);cout<<endl;ct++;}
}
        cout<<"TOTAL : "<<ct;
return 0;}