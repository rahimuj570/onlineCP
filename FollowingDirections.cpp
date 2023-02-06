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
	//////////////////////////////

string s;
int n,x,y,sad,size;
cin>>n;
for (int i = 0; i < n; ++i)
{	
	sad=1;x=0;y=0;
	cin>>size;
	cin>>s;
	for(int j=0; j<size; j++){
		if(x==1 && y==1){cout<<"YES\n";sad=0;break;}
		if(s[j]=='U')y++;
		if(s[j]=='D')y--;
		if(s[j]=='R')x++;
		if(s[j]=='L')x--;
	}
	if(sad){if(x==1 && y==1)cout<<"YES\n";
	else cout<<"NO\n";}

}


return 0;}
