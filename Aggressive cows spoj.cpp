#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
ll n,c,t;
std::vector<ll> v;
bool possible(ll dist){
        ll count=c;
        ll prev=-1;
        for(int i=0; i<n; i++){
                if((v[i]-prev>=dist || prev==-1)){
                        prev=v[i];
                        count--;
                }
                if(count==0)break;
        }
        return count==0;
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        ////////////////////////////////

       cin>>t;
       while(t--){
        ll low=0,high=10e9,input,mid;
        v.clear();
        cin>>n>>c;
        ll temp=n;
        while(temp--){cin>>input; v.push_back(input);}
        sort(v.begin(), v.end());
        while(high-low>1){
                mid=(high+low)/2;
                if(possible(mid))low=mid;
                else high=mid-1;
        }
        if(possible(high))cout<<high<<endl;
        else cout<<low<<endl;
       } 

return 0;}