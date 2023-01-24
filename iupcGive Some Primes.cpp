#include <iostream>
#include <math.h>
using namespace std;
// void init_code(){
//      #ifndef ONLINE_JUDGE
//        freopen("inputf.in","r",stdin);
//        freopen("outputf.out","w",stdout);
//   #endif
// }
// int main() {
//     init_code();
// long long int t,m,n,j;
// int prime;
// cin>>t;
// for(int i=0; i<t; i++){
//     cin>>n>>m;
//     for(j%2==0?j=n+1:j=n+2; j<=m; j=j+2){
//         prime=1;
//         if(j==0 || j==1)prime=0;
//         for(int k=2; k*k<=j; k++){
//             if(j%k==0){
//                 prime=0;
//                 break;
//             }
//         }
//         if(prime)cout<<j<<' ';
//     }
//     cout<<endl;
// }

// return 0;}




int isPrime (int b){
  if (b <= 1)
    return 0;
  for (int i=2; i<=sqrt(b); i++)
    if (b%i==0)
      return 0;
  return 1;}

void printPrime (int a, int b){
    for (int i = a; i <= b; i++)
    if(isPrime (i) && (i!=1))printf ("%d\n", i);
    }

int main (){
    // init_code();
  int t, a, b;
  scanf ("%d", &t);
  while (t--)
    {
      scanf ("%d %d", &a, &b);
      printPrime (a, b);
      printf ("\n");
   }
   return 0;
}


