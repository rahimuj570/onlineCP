#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

vector<ll>v;

bool possible(int n, int m, int high){
        ll wood=0;
        for(ll i:v){
                if(i>=high)wood+=(i-high);
        }
        return wood>=m;
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif

ll high=10e9;
ll low=0;
ll n,m;
cin>>n>>m;
ll temp;
while(cin>>temp)v.push_back(temp);
sort(v.begin(), v.end());
while(high-low>1){
        int mid=(high+low)/2;
        if(possible(n,m,mid))low=mid;
        else high=mid-1;
}
if(possible(n,m,high))cout<<high<<endl;
else cout<<low<<endl;

 return 0;}
