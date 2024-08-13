#include <bits/stdc++.h>

#define int             ll
using namespace std;
typedef long long       ll;
int cases       =       0;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>children(n);
    for (int i = 0; i < n; i++){
        cin>>children[i];
    }
    sort(children.begin(),children.end());
    int i=0,j=n-1,contador=0;
    while(i<=j){
        if(children[i]+children[j]<=x){
            i++;
        }
        j--;
        contador++;
    }
    cout<<contador;
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
