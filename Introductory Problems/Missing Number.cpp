#include <bits/stdc++.h>

#define int         ll
using   namespace   std;
typedef long long   ll;

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    for (int i = 1; i <= n; i++){
        if(i!=nums[i]){
            cout<<i;
            break;
        }
    }
    return 0;
}
