#include<bits/stdc++.h>
using namespace std;
void init_code(){
     #ifndef ONLINE_JUDGE
       freopen("inputf.in","r",stdin);
       freopen("outputf.out","w",stdout);
  #endif
}
#include <bits/stdc++.h>
using namespace std;

long long cost(string s, string t) {
  long long c = 0;
  for (int i = 0; i < s.size(); i++) {
    c += abs(s[i] - t[i]);
  }
  return c;
}

int main() {
    init_code();
int t,w,c,move=0,move2,fmove=INT_MAX;
cin>>t;
for(int i=0; i<t; i++){
    cin>>w>>c;
    string str[w];
    for(int j=0; j<w; j++)cin>>str[j];
    for(int k=0; k<w-1; k++){
        for(int l=k+1; l<w; l++){
            for(int q=0; q<c; q++){
                move+=abs(str[k][q]-str[l][q]);
            }
            move2=min(fmove,move);
            fmove=move2;
            move=0;
        }
    }
    cout<<fmove<<endl;
    fmove=INT_MAX;
    move=0;
    move2=0;
}

return 0;}


