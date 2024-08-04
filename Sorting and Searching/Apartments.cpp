#include <bits/stdc++.h>

#define int                 ll

using namespace std;

typedef long long                   ll;

int cases           =   0;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

bool comp(int a,int b){
    return a>b;
}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>N(n),M(m);
    for (int i = 0; i < n; i++){
        cin>>N[i];
    }
    for (int i = 0; i < m; i++){
        cin>>M[i];
    }
    sort(N.begin(),N.end(),comp);
    sort(M.begin(),M.end(),comp);
    int j=0,i=0,cont=0;
    while(true){
        if(abs(N[i]-M[j])<=k){
            cont++;
            i++,j++;
        }
        else if(N[i]>M[j]){
            i++;
        }
        else{
            j++;
        }
        if(i>=n||j>=m)
            break;
    }
    cout<<cont;  
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
