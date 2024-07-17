#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;



int getUpperBound(int arr[], int luchu_height, int n, int start, int end){
        while(start<=end){
                int mid =(start+end)/2;
                if(arr[mid]==luchu_height)start = mid+1;
                else if(arr[mid]<luchu_height)start=mid+1;
                else end=mid-1;
        }
        return start<=n?start:-1;
}

int getLowerBound(int arr[], int luchu_height, int n, int start, int end){
        while(start<=end){
                int mid = (start+end)/2;
                if(arr[mid]==luchu_height)end=mid-1;
                else if(arr[mid]>luchu_height)end=mid-1;
                else start=mid+1;
        }
        return end<=n?end:n;        
}


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
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
        }
        cout<<"case "<<t_count<<':'<<endl;
        while(q--){
                int p1,p2;
                cin>>p1>>p2;
                int startIndex = getLowerBound(arr,p1, n, 0,n-1)+1;
                int endIndex = getUpperBound(arr,p2,n, 0,n-1)-1;
                cout<<(endIndex - startIndex)+1<<endl;
        }
}

return 0;}
