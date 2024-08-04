#include <bits/stdc++.h>

#define int                 ll

using namespace std;

typedef long long                   ll;

int cases           =   0;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    set<int>N;
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x;
        N.insert(x);
    }
    cout<<N.size();
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
