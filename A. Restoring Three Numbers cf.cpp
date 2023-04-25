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

        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        sort(arr,arr+4);
        int a=arr[2], b=arr[0], c=arr[1], sum=arr[3];
        cout<<sum-a<<' '<<sum-b<<' '<<sum-c<<'\n';

return 0;}