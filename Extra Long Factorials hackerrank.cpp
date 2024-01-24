#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;



std::vector<int> fact;


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int n,carry,mult;
        cin>>n;
        fact.push_back(1);
        for(int i=2; i<=n; i++){
                carry=0;
                for(int j=0; j<fact.size(); j++){
                        mult=(fact[j]*i)+carry;
                        fact[j]=mult%10;
                        carry=mult/10;
                }
                while(carry){
                        fact.push_back(carry%10);
                        carry/=10;
                }
        }
        for (auto i = fact.rbegin(); i != fact.rend(); ++i)cout<<*i;
         cout<<endl;
return 0;}