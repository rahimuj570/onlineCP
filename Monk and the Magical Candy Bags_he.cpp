#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

int t,n,k;
ll total=0;; 
ll input;
multiset<ll>v;
cin>>t;
while(t--){
        total=0;
        v.clear();
        cin>>n>>k;
        while(n--){
                cin>>input;
                v.insert(input);
        }
        while(k--){
                auto lg=--v.end();
                total+=*lg;
                v.erase(lg);
                v.insert(*lg/2);
        }
        cout<<total<<endl;
}

return 0;}