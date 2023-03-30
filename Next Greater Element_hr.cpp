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
stack<int>st;
for(int i=0; i<n; i++){
        if(i==0)st.push(i);
        else{
                while((!st.empty())&&(v[i]>v[st.top()])){v[st.top()]=v[i];st.pop();}
                st.push(i);
                if(v[i]<v[st.top()]){st.push(i);}
        }
}
while(!st.empty()){v[st.top()]=-1; st.pop();}
for(int i=0; i<n; i++){cout<<original_v[i]<<' '<<v[i]<<endl;}

return 0;}