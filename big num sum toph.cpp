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

string n1,n2;
int temp;
int carry=0;
int res;
std::vector<int> v;
cin>>n1>>n2;
int sz=n1.size();
// cout<<sz-1;
for(int i=sz-1; i>-1; i--){
        temp=((n1[i]-'0')+carry)+(n2[i]-'0');
        // cout<<temp;
        carry=temp/10;
        res=temp%10;
        // cout<<res;
        v.push_back(res);
}
if(carry)v.push_back(carry);
for(auto i=v.rbegin(); i!=v.rend(); i++)cout<<*i;


return 0;}