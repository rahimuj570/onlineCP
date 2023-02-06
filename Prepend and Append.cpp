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
int n,n2;
cin>>n;
for (int i = 0; i < n; ++i)
{	int j=0;
	cin>>n2;
	cin>>s;
	while(s.size()>1){
		if(s[0]==s[s.size()-1]){break;}
		else{s.erase((s.size()-1),1);s.erase(j,1);}
	}
	cout<<s.size()<<'\n';
}



return 0;}
