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

        int temp;
        int arr[5]={4,3,2,6,1};
        for(int i=0; i<6; i++){
                for(int j=0; j<6-1; j++){
                        if(arr[i]<arr[j]){
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
        for(int i=0; i<5; i++)cout<<arr[i]<<' ';

return 0;}