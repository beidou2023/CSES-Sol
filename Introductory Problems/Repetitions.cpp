#include <bits/stdc++.h>

#define int         ll
using   namespace   std;
typedef long long   ll;

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int cont=1,maxi=1;
    char aux=s[0];
    for (int i = 1; i < s.size(); i++){
        if(aux==s[i])
            cont++;
        else{
            cont=1;
        }
        aux=s[i];
        maxi=max(maxi,cont);
    }
    cout<<maxi;
    return 0;
}
