#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    string s,res1="";
    cin>>s;
    if(s.length()==1){
        cout<<s;
        return ;
    }
    sort(s.begin(),s.end());
    int l=s.size();
    if(l%2==0){
        for (int i = 1; i < l; i++){
            char aux=s[i-1];
            int contador=1;
            while(aux==s[i]){
                i++;
                contador++;
                if(contador%2==0)
                    res1+=aux;
            }
            if(contador%2!=0){
                cout<<"NO SOLUTION";
                return;
            }
        }
        string res2=res1;
        reverse(res2.begin(),res2.end());
        cout<<(res1+res2);
    }
    else{
        int limit=-1;
        for (int i = 1; i < l; i++){
            char aux=s[i-1];
            int contador=1;
            while(aux==s[i]){
                i++;
                contador++;
                if(contador%2==0)
                    res1+=aux;
            }
            if(contador%2!=0){
                if(limit!=-1){
                    cout<<"NO SOLUTION";
                    return;
                }
                limit=i-1;
            }
        }
        if(limit==-1)
            limit=l-1;
        string res2=res1;
        reverse(res2.begin(),res2.end());
        cout<<(res1+s[limit]+res2);
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
