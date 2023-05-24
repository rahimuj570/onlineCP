#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back

int vis[52][52];
char graph[52][52];
vector<pair<int,int>>indxA;
        int h,w;
        char c;

bool chk(int i,int j){
        if(i<h && j<w && i>=0 && j>=0)return 1;
        else return 0;
}

void dfs(int i, int j, int dist){
        vis[i][j]=dist;
        if(chk(i,j+1))if( vis[i][j+1]==0 && graph[i][j]-0==graph[i][j+1]-1){
                dfs(i,j+1,dist+1);
        }
        if(chk(i+1,j))if( vis[i+1][j]==0 && graph[i][j]-0==graph[i+1][j]-1){
                dfs(i+1,j,dist+1);
        }
        if(chk(i+1,j+1))if( vis[i+1][j+1]==0 && graph[i][j]-0==graph[i+1][j+1]-1){
                dfs(i+1,j+1,dist+1);
        }
        if(chk(i-1,j-1))if( vis[i-1][j-1]==0 && graph[i][j]-0==graph[i-1][j-1]-1){
                dfs(i-1,j-1,dist+1);
        }
        if(chk(i-1,j+1))if( vis[i-1][j+1]==0 && graph[i][j]-0==graph[i-1][j+1]-1){
                dfs(i-1,j+1,dist+1);
        }
        if(chk(i+1,j-1))if( vis[i+1][j-1]==0 && graph[i][j]-0==graph[i+1][j-1]-1){
                dfs(i+1,j-1,dist+1);
        }
        if(chk(i-1,j))if( vis[i-1][j]==0 && graph[i][j]-0==graph[i-1][j]-1){
                dfs(i-1,j,dist+1);
        }
        if(chk(i,j-1))if( vis[i][j-1]==0 && graph[i][j]-0==graph[i][j-1]-1){
                dfs(i,j-1,dist+1);
        }
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int cases=1;
        while(true){
        indxA.clear();
        cin>>h>>w;
        if(h==0 && w==0){break;}

        for(int i=0; i<h; i++){
                for(int j=0; j<w; j++){
                        vis[i][j]=0;
                        cin>>c;
                        graph[i][j]=c;
                        if(c=='A')indxA.pb({i,j});
                }
        }
for(auto i:indxA){
        dfs(i.first,i.second,1);
}
int res=0;
for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
                res=max(res,vis[i][j]);
        }
}
cout<<"Case "<<cases<<": "<<res<<endl;
cases++;
        }
        

return 0;}