#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);


int move(vector<int> org_v,vector<int> v,int target){
		std::vector<int>::iterator it;
		std::vector<int>::iterator it2;
		it=find(org_v.begin(), org_v.end(),target);
		it2=find(v.begin(), v.end(),target);
		// cout<<(it-org_v.begin());
		// cout<<endl;
		// cout<<(it2-v.begin());
		return abs((it-org_v.begin())-(it2-v.begin()));
}


int main(){
fast;
	// #ifndef ONLINE_JUDGE
	// freopen("inputf.in","r",stdin);
	// freopen("outputf.out","w",stdout);
	// #endif
	////////////////////////////////

	float l,w,hover;
	while(cin>>l>>w){
		if(l==0 || w==0)break;
		hover=l/4;
		cout<<fixed<<setprecision(4)<<(l+w)-hover<<'\n';
	}


return 0;}
