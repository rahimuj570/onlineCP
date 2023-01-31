#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
fast;
	// #ifndef ONLINE_JUDGE
	// freopen("inputf.in","r",stdin);
	// freopen("outputf.out","w",stdout);
	// #endif
	//////////////////////////////////
	int a,b,c,t,i=1;
	cin>>t;
	while(t--){
	cin>>a>>b>>c;
	(a+b+c)%3==0?cout<<"Case "<<i<<": Peaceful\n":cout<<"Case "<<i<<": Fight\n";
	i++;
}
return 0;}