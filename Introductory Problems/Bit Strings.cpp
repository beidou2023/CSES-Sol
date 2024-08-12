#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
const int MOD=1e9+7;
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n,N=1;
    cin>>n;
    for (int i = 1; i <= n; i++){
        N=(N*2)%MOD;
    }
    cout<<N;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt=1;
    // cin>>tt;
    while(tt--){

        solve();
    }
    return 0;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
