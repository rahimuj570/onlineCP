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
int n,input,cop=0;
cin>>n;
stack<int>crime;
while(n--){
        cin>>input;
        if(input==-1){
                if(cop==0)crime.push(input);
                else{
                       cop--; 
                }
        }
        else cop+=input;
}
cout<<crime.size();
return 0;}