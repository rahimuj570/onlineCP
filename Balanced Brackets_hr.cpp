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

int n;
string s;
cin>>n;
stack<char>st;
while(n--){
        int flag=1;
        st=stack<char>();
        cin>>s;
        for(int i=0;i<s.size();i++){
                char b=s[i];
                if(b=='(' || b=='[' || b=='{'){
                        st.push(b);
                }else{
                        if(st.empty()){flag=0;break;}
                        char b2=st.top();
                        if(b2=='('&&b==')' || b2=='['&&b==']' || b2=='{'&&b=='}'){
                                st.pop();
                        }else {flag=0;break;}
                }
        }
        if(flag==0)cout<<"NO\n";
        else if(st.empty())cout<<"YES\n";
        else cout<<"NO\n";
}

return 0;}