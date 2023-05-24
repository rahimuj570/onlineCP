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
        set<string>st;
        int t,n,ct=0,car;
      string s,temp;
        cin>>t;
        while(t--){
                st.clear();
      cin>>n;
      cin>>s;
      for(int i=0; i<n-1; i++){
        temp+=s[i];
        temp+=s[i+1];
        st.insert(temp);
        temp.clear();
       }
db(st.size())
      }
return 0;}