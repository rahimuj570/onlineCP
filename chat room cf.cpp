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

string s;
int ct=0;
string h="hello";
cin>>s;
for(int i=0,j=0; i<s.size(); i++){
        if(s[i]==h[j]){
                j++;
                ct++;
        }
}
if(ct==5)cout<<"YES\n";
else cout<<"NO\n";

return 0;}