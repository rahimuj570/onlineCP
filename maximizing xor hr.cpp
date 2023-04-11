#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<5>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb(x) push_back(x);

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

ll h,l;
cin>>l>>h;
std::vector<ll> v;
for(ll i=l; i<=h; i++)v.pb(i);
ll size=v.size();
ll subsetCount=pow(2,size);

ll maxX0r=0;
for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
                maxX0r=max(maxX0r,v[i]^v[j]);
        }
}
cout<<maxX0r<<endl;

return 0;}