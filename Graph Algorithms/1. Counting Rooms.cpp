#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
const int INF       = 0x3f3f3f3f3f3f3f3f;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
int n, m;
int dir[2][4] = {{0,0,1,-1}, {1,-1,0,0}}; // 4-direcciones
vector<vector<int>>g,visi;

int floodfill(int x, int y) {
    if(x<0||y<0||x>=n||y>=m||visi[x][y]||g[x][y]==0)
        return 0;
    visi[x][y] = 1;
    int ret = 1;
    for(int i = 0; i < 4; i++)
        ret += floodfill(x + dir[0][i], y + dir[1][i]);
    return ret;
}

void solve(){
    cin>>n>>m;
    g.resize(n+1,vector<int>(m+1,0));
    visi.resize(n+1,vector<int>(m+1,1));
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        for (int j = 0; j < s.length(); j++){
            if(s[j]=='.'){
                g[i][j]=1;
                visi[i][j]=0;
            }
        }
    }
    int res=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(!visi[i][j]){
                int a=floodfill(i,j);
                res++;
            }
        }
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

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
