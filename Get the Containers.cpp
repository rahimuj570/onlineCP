#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;


bool isCapValid(int arr[],int maxCap, int k, int n){
        int container=1,sum=0;
        for(int i=0; i<n; i++){
                sum+=arr[i];
                if(sum>maxCap){
                        container++;
                        sum=arr[i];
                }
        }
        if(container<=k)return true;
        else return false;
}

int getMaxCapacity(int arr[], int start, int end, int k, int n){
        int mid,ans;
        while(start<=end){
                mid = (start+end)/2;
                if(isCapValid(arr,mid,k,n)){
                        end=mid-1;
                        ans=mid;
                }else{
                        start=mid+1;
                }

        }
return ans;}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
int t;
cin>>t;
int t_count=0;
while(t--){
        t_count++;
        int n,k;
        cin>>n>>k;
        int mx=0,sum=0;
        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
                mx=max(mx,arr[i]);
                sum+=arr[i];
        }
        int ans = getMaxCapacity(arr,mx,sum,k,n);
        cout<<"Case "<<t_count<<": "<<ans<<endl;
}

return 0;}
