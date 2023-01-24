#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}
int main() {
    init_code();
    int t,n,input,count=0;
    // cin>>t;
    // for(int l=0; l<t; l++){
    count=0;
    set<int>sarr;
    set<int>sarr2;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){cin>>input;
        v.push_back(input);
        if(!sarr.count(input))sarr.insert(input);
        else {sarr2.insert(input);}}

    vector<int>uniqV(sarr.begin(), sarr.end());
    vector<int>extraV(sarr2.begin(), sarr2.end());
    // for(int i:uniqV){cout<<i;}
    for(int i=0; i<extraV.size(); i++){
        if(sarr.count(extraV[0]))count++;
    }
    cout<<count+uniqV.size();

// if(v.size()==uniqV.size()){cout<<v.size()<<endl;}
// else{
// for(int i=0; i<uniqV.size(); i++){ 
//     if(find(v.begin(), v.end(), uniqV[i])!=v.end()){
//         count++;
//     }
// }
// cout<<count+uniqV.size()<<endl;}
// }
return 0;}


