#include <bits/stdc++.h>

#define int         ll
using   namespace   std;
typedef long long   ll;

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    cout<<n<<' ';
    while(n!=1){
        if(n%2==0)
            n/=2;
        else
            n=n*3+1;
        cout<<n<<' ';
    }
    return 0;
}
