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
int t,n;
cin >>t;
while(t--){
        int power=1;
        std::vector<int> v;
        cin>>n;
        while(n>0){
                if(n%10>0){v.push_back((n%10)*power);}
                power*=10;
                n/=10;
        }
        cout<<v.size()<<endl;
        for(int i: v)cout<<i<<' ';
                cout<<endl;
}
return 0;}