#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
const int INF       = 0x3f3f3f3f3f3f3f3f;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

void solve(){
    int n,x,aux;
    cin>>n>>x;
    vector<pair<int,int>>nums;
    for (int i = 0; i < n; i++){
        cin>>aux;
        nums.push_back({aux,i});
    }
    sort(nums.begin(),nums.end());
    int l=0,r=n-1;
    while(l<r){
        if(nums[l].first+nums[r].first==x){
            cout<<nums[l].second+1<<' '<<nums[r].second+1;
            return;
        }
        else if(nums[l].first+nums[r].first>x){
            r--;
        }
        else
            l++;
    }
    cout<<"IMPOSSIBLE";
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

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
