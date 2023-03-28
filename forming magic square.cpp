//HEBCIGFAD
//123456789


#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);



int msqr0(int arr[3][3]){
        int algo[9]={8,3,4,1,5,9,6,7,2};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr1(int arr[3][3]){
        int algo[9]={6,1,8,7,5,3,2,9,4};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr2(int arr[3][3]){
        int algo[9]={2,7,6,9,5,1,4,3,8};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr3(int arr[3][3]){
        int algo[9]={4,9,2,3,5,7,8,1,6};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr4(int arr[3][3]){
        int algo[9]={8,1,6,3,5,7,4,9,2};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr5(int arr[3][3]){
        int algo[9]={6,7,2,1,5,9,8,3,4};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr6(int arr[3][3]){
        int algo[9]={2,9,4,7,5,3,6,1,8};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}

int msqr7(int arr[3][3]){
        int algo[9]={4,3,8,9,5,1,2,7,6};
        int sum=0,indx=0;
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){sum+=abs(algo[indx]-arr[i][j]);indx++;}
}
return sum;}




int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int arr[3][3];
        int res[8];
        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++)cin>>arr[i][j];
        }
        res[0]=msqr0(arr);
        res[1]=msqr1(arr);
        res[2]=msqr2(arr);
        res[3]=msqr3(arr);
        res[4]=msqr4(arr);
        res[5]=msqr5(arr);
        res[6]=msqr6(arr);
        res[7]=msqr7(arr);
        // cout<<min(res[7],min(res[6],min(res[5],min(res[4],min(res[3],min(res[2],min(res[0],res[1])))))));

return 0;}