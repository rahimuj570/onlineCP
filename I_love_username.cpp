 #include<bits/stdc++.h>
using namespace std;
int main(){
   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("inputf.in","r",stdin); //can need to change file . this one for taking input
       freopen("outputf.out","w",stdout); // this one for output
  #endif
////////////////////////////////////////////////
int n,count=0,flag;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
  cin>>arr[i];
  if(i!=0){
    if(arr[i-1]>arr[i]){
      for(int j=i; j!=0; j--){
      if(arr[i]<arr[j-1]){
        flag=1;
      }else {
        flag=0;
        break;
      }
    }
          if(flag)count++;
    }else{
      for(int j=i; j!=0; j--){
      if(arr[i]>arr[j-1]){
        flag=1;
      }else {
        flag=0;
        break;
      }
    }
if(flag)count++;
    }
  }
}
cout<<count;

///////////////////////////////////////////////
  #ifdef ONLINEJUDGEy
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif
   return 0;
}