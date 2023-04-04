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

int n,input;
cin>>n;
std::vector<int> v;
for(int i=0; i<n; i++){cin>>input;v.push_back(input);}
std::vector<int> original_v(v.begin(), v.end());
        // sort(v.begin(), v.end());
for(int i=0; i<n; i++){
        cout<<v[i]<<' ';
        auto it=upper_bound(v.begin(), v.end(),v[i]);
        if(it!=v.end())v[i]=(*it);
        else v[i]=-1;
      }
for(int i=0; i<n; i++){cout<<original_v[i]<<' '<<v[i]<<endl;}

return 0;}