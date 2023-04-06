#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

        std::vector<int> v(1000007);
        
bool found(int ind, int target){
                return v[ind]>=target;
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int n,prevSum=0;
        cin>>n;
        for(int i=0; i<n; i++){
                if(i==0)cin>>v[i];
                else {cin>>v[i]; v[i]+=prevSum;}
                prevSum=v[i];
        }
// for(auto i:v)cout<<i<<' ';
        int m,juicy;
        cin>>m;
        while(m--){
                cin>>juicy;
                int low=0,high=n-1,mid;
                while(high-low>1){
                        mid=(high+low)/2;
                        if(found(mid,juicy))high=mid;
                        else low=mid;
                }
                if(found(low,juicy))cout<<low+1<<endl;
                else cout<<high+1<<endl;
        }

return 0;}