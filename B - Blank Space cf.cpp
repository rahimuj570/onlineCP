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

        int t;
        cin>>t;
        while(t--){
                int n,flag=0,count=0,maxct=0;
                cin>>n;
                int arr[n];
                for(int i=0; i<n; i++){
                        cin>>arr[i];
                        if(arr[i]==0){
                                count++;
                        }else {
                                maxct=max(maxct,count);
                                count=0;
                        }
                }
                maxct=max(maxct,count);
                db(maxct)
        }

return 0;}