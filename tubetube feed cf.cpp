#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back

int found(int v[],int n, int target){
        for(int i=0; i<n; i++){
                if(v[i]==target)return i+1;
        }
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int test;
        cin>>test;
        while(test--){
                int n,t;
                cin>>n>>t;
                int dur[n];
                int val[n];
                // std::vector<int> finalVid;
                for(int i=0; i<n; i++)cin>>dur[i];
                for(int i=0; i<n; i++)cin>>val[i];
                        int i=0,res=0,ind=-1;
                while(i<n){
                        if(t>=dur[i]){
                                if(val[i]>res){
                                res=val[i];
                                ind=i+1;}
                        }
                                t--;
                                i++;
                }
                db(ind)


        }

return 0;}