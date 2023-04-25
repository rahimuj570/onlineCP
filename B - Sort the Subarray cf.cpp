#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back
        #define nnn cout<<endl;

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

ll n,t;
cin>>t;
while(t--){
cin>>n;
ll arr[n],arr2[n];
for(ll i=0; i<n; i++){
        cin>>arr[i];
}
for(ll i=0; i<n; i++){
        cin>>arr2[i];
}

ll l=0, r=n-1;
ll lf=1, rf=1;
while(true){
        if(arr[l]==arr2[l] && lf==1)l++;
        else lf=0;
        if(arr[r]==arr2[r] && rf==1)r--;
        else rf=0;
        if(lf==0 && rf==0)break;
}

while(l>0){
if(arr2[l-1]<=arr2[l])l--;
else break;}

while(r<n-1){
if(arr2[r]<=arr2[r+1])r++;
else break;}
l<0?cout<<1:cout<<++l;cout<<' ';r>=n?cout<<n:cout<<++r;
nnn
}
return 0;}