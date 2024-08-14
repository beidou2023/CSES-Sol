#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>desc(k);
    for (int i = 0; i < k; i++){
        cin>>desc[i];
    }
    vector<bool>dp1(n+1,true);
    vector<char>dp2(n+1);
    dp1[0]=false;
    for (int i = 1; i <=n; i++){
        bool pass=false;
        for (int j = 0; j < k; j++){
            if(i-desc[j]>=0&&dp1[i-desc[j]]==false){
                pass=true;
                break;
            }
        }
        if(!pass){
            dp1[i]=false;
        }
    }
    for (int i = 1; i <= n; i++){
        dp1[i]?cout<<'W':cout<<'L';
    }
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt=1;
    //cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
