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

        int t,inp;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                std::vector<int> arr;
                for(int i=0; i<n; i++){cin>>inp;arr.push_back(inp);}
                sort(arr.rbegin(), arr.rend());
        again:
                // if(arr.size()==1){cout<<"YES\n";return 0;}
                for(int i=arr.size()-1; i>0; i--){
                        if(arr[i-1]-arr[i]<=1){arr.pop_back();
                        goto again;}
                        else break;
                }

 if(arr.size()==1){cout<<"YES\n";}
 else cout<<"NO\n";
        }

return 0;}