#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
// void cmp(){};
void accs(string &s,int i,int j){
        int temp=i;
        auto start=s.begin();
        auto end=s.begin();
        start+=(i);
        end+=(j);
        multiset<char>st;
        for(&start; start!=end+1; start++){
                st.insert(s[i]);
                i++;
        }
        for(auto &it:st){s[temp]=it;temp++;}
}

void decs(string &s,int i,int j){
        int temp=i;
        auto start=s.begin();
        auto end=s.begin();
        start+=(i);
        end+=(j);
        multiset<char>st;
        for(&start; start!=end+1; start++){
                st.insert(s[i]);
                i++;
        }
        for(auto it=st.rbegin(); it!=st.rend(); it++){
                s[temp]=*it;
                temp++;
                // cout<<*it;
        }
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////



string s;
int n,operation,i,j,k;
cin>>n>>operation;
cin>>s;
while(operation--){
        cin>>i>>j>>k;
        if(k==1)accs(s,i-1,j-1);
        else decs(s,i-1,j-1);
}
        cout<<s;
return 0;}