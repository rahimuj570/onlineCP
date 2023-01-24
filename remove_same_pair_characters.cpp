#include<bits/stdc++.h>
using namespace std;

string unq(string s){
	int flg=1,i;
	while(flg==1){
		flg=0;
	int sz=s.size();
	for(i=0; i<sz; i++){
		if(s[i]==s[i+1]){s.erase(i,2);flg=1;}
	}
}return s;}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif

	string s;
	cin>>s;
string a=unq(s);
	cout<<a;

}