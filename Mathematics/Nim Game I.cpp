#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n,aux,res=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>aux;
        res^=aux;
    }
    res!=0?cout<<"first":cout<<"second";
    cout<<endl;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
