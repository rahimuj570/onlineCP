#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}
void decToBinary(int n,vector<int>&qq){
int binaryNum[n];
int i = 0;
while (n > 0) {
binaryNum[i] = n%2;
n = n/2;
i++;}
for (int j=i-1; j>=0; j--) qq.push_back(binaryNum[j]);
}

int main() {
    init_code();
    int t,n,prime,one=0;
    cin>>t;
    for(int time=0; time<t; time++){
    	one=0;
    vector<int>qq;
    vector<int>primes;
    cin>>n;
        for(int j=2; j<=n; j++){
        prime=1;
        for(int k=2; k<=j/2; k++){
            if(j%k==0){
                prime=0;
                break;
            }
        }
        if(prime)primes.push_back(j);
    }
    for(int i=0; i<primes.size(); i++){
    	decToBinary(primes[i],qq);}
    	for(int i=0; i<n; i++){
    		if(qq[i]==1)one++;
    	}
    	cout<<one<<endl;}

return 0;}


