#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double aux=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
    if(aux==0)
        cout<<"TOUCH";
    else if(aux<0)
        cout<<"RIGHT";
    else
        cout<<"LEFT";
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
