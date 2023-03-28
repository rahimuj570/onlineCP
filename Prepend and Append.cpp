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

int t,n=4,stop;
string s;
// cin>>t;
// for (int i = 0; i < t; ++i)
// {
// 	cin>>n;
	n/=2;
	cin>>s;
	while(n<s.size()){
	set<char>set1(s.begin()+n, s.end());
	set<char>set2(s.begin(), s.end()-n);
	set<char>set3(s.begin(), s.end()-j);
	set<char>set4(s.begin()+j, s.end());
// for(auto a:set2)cout<<a<<endl;
	// cout<<s;
	}
// }



return 0;}
