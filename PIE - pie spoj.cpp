#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

ll n,f;
std::vector<ll> v;

bool possible(double size){
        ll totalCake=0;
        for(int i=0; i<n; i++){
                totalCake+=((v[i]*v[i])*M_PI)/size;
        }
        return totalCake>=f;
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////

        int t;
        cin>>t;
        while(t--){
                if(!v.empty())v.clear();
                cin>>n>>f;
                f++;
                ll temp=n;
                ll input;
                while(temp--){
                        cin>>input;
                        v.push_back(input);
                }
                sort(v.rbegin(), v.rend());
                double maxV=(v[0]*v[0])*M_PI;
                double low=0, high=maxV, mid;
                while(high-low>=1e-4){
                        mid=(high+low)/2;
                        if(possible(mid))low=mid;
                        else high=mid;
                }
                possible(high)?cout<<fixed<<setprecision(4)<<high<<"\n":cout<<fixed<<setprecision(4)<<low<<"\n";                      
        }

return 0;}