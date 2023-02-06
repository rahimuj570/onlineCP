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

string s="codeforces";
char c;
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>c;
	count(s.begin(), s.end(),c)?cout<<"YES\n":cout<<"NO\n";
}


return 0;}
