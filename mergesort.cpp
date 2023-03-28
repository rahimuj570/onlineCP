#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);


void merge(int arr[], int low, int mid, int high){
        int arr2[100], j=low,k=mid+1,l=low;
        while(j<=mid && k<=high){
                if(arr[j]<arr[k]){arr2[l]=arr[j]; l++;j++;}
                else {arr2[l]=arr[k]; l++; k++;}
        }
        while(j<=mid){arr2[l]=arr[j]; j++;l++;}
        while(k<=high){arr2[l]=arr[k]; k++;l++;}
        for(int i=low; i<=high; i++){
                arr[i]=arr2[i];
        }
}

void mergesort(int arr[], int low, int high){
        if(low<high){
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr, mid+1, high);
        merge(arr,low, mid, high);}
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
        int arr[]={1,3,2,9,4,6};
        mergesort(arr,0,6);
        for(int i=0; i<6; i++)cout<<arr[i]<<' ';

return 0;}


