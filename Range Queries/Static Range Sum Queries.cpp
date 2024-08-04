#include <bits/stdc++.h>

#define int                 ll
using namespace std;
typedef long long                   ll;
int cases           =   0;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>N(n),pre(n+1,0);
    for (int i = 0; i < n; i++){
        cin>>N[i];
        pre[i+1]=pre[i]+N[i];
    }
    for (int i = 0; i < q; i++){
        int L,R;
        cin>>L>>R;
        cout<<pre[R]-pre[L-1]<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt=1;
    // cin>>tt;
    while(tt--){
        cases++;
        solve();
    }
    return 0;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
