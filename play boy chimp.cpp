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
        return end<=n?end:-1;        
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
int n,q;
cin>>n;
int height[n];
for(int i=0; i<n; i++)cin>>height[i];
cin>>q;
for(int i=0; i<q; i++){
        int tmp;
        cin>>tmp;
        int upper = getUpperBound(height,tmp,n,0,n-1);
        int lower = getLowerBound(height,tmp,n,0,n-1);
        lower>0?(cout<<height[lower]):cout<<'X';
        cout<<' ';
        upper<n?cout<<height[upper]:cout<<'X';
        cout<<endl;
}


return 0;}
