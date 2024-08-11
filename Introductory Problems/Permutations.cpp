#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
    }
    else if(n<4){
        cout<<"NO SOLUTION";
    }
    else{
        for (int i = n/2; i > 0; i--){
            if(i==n/2&&n%2!=0)
                cout<<n<<' ';
            cout<<i<<' '<<i+(n/2)<<' ';
        }
    }
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
