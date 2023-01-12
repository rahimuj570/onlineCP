    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int n,k,problemTime=0,count=0;
    cin>>n>>k;
    for (int i=1; i <=n; ++i){
    problemTime+=(i*5);
    if(problemTime+k<=240)count++;
    }
    cout<<count;
    return 0;}