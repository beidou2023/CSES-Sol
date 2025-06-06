#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
const int INF       = 0x3f3f3f3f3f3f3f3f;

// **************************  Tasks and Deadlines  **************************
// vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

vector<pair<int,int>>tasks;

void solve(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int a,b;
        cin>>a>>b;
        tasks.push_back({a,b});
    }
    sort(tasks.begin(),tasks.end());
    int res=0,time=0;
    for (int i = 0; i < n; i++){
        time+=tasks[i].first;
        res+=tasks[i].second-time;
    }
    cout<<res;
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

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
