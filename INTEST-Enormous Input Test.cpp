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

	int a,b,c,count=0;
	cin>>a>>b;
	while(a--){
		cin>>c;
		if(c%b==0)count++;
	}
	cout<<count;
return 0;}