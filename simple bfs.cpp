#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

std::vector<int> graph[1000];
bool vis[1000];
int level[1000],front;

void bfs(int start){
        queue<int>q;
        q.push(start);
        vis[start]=true;
        cout<<start<<'='<<level[start]<<endl;
        while(!q.empty()){
                front=q.front();
                q.pop();
                for(int adj:graph[front]){
                        if(vis[adj]==false){
                                q.push(adj);
                                vis[adj]=true;
                                level[adj]=level[front]+1;
                                cout<<adj<<'='<<level[adj]<<endl;
                        }
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
while(cin>>x>>y){
        graph[x].push_back(y);
        graph[y].push_back(x);
}
        bfs(1);
return 0;}


