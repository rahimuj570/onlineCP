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
cin>>s;
transform(s.begin(), s.end(),s.begin(), ::tolower);
for(int i=0; i<s.size(); i++){
        if(s[i]=='i' || s[i]=='e' || s[i]=='a' || s[i]=='o' || s[i]=='u' || s[i]=='y');
        else cout<<'.'<<s[i];
}
cout<<endl;

return 0;}