#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int t,n;
        cin>>t;
        while(t--){
                cin>>n;
                ll arr[n];
                for (int i = 0; i < n; ++i)cin>>arr[i];
                sort(arr,arr+n);
                db(max(arr[0]*arr[1],arr[n-1]*arr[n-2]));
        }

return 0;}