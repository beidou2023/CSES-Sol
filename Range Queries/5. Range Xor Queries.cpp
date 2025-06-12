#include <bits/stdc++.h>
#define int         ll
using   namespace   std;
typedef long long   ll;
const int INF       = 0x3f3f3f3f3f3f3f3f;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

struct segtree { 
    int n;
    vector<long long> tree;

    void init(int nn) {
        tree.clear();
        n=nn;
        int size=1;
        while (size<n)
            size*=2;
        tree.resize(size*2);
    }

    void update(int i,int sl,int sr,int pos,long long diff) {
        if (sl<=pos&&pos<=sr) {
            if (sl == sr)
                tree[i]+=diff;
            else {
                int mid=(sl+sr)/2;
                update(i*2+1,sl,mid,pos,diff);
                update(i*2+2,mid+1,sr,pos,diff);
                tree[i]=(tree[i*2+1]^tree[i*2+2]);   //
            }
        }
    }

    void update(int pos, ll diff) {
        update(0,0,n-1,pos,diff);
    }

    ll query(int i,int sl,int sr,int l,int r) {
        if (l<=sl&&sr<=r) {
            return tree[i];
        } else if(sr<l||r<sl) {
            return 0;                       //
        } else {
            int mid=(sl+sr)/2;
            auto a = query(i*2+1,sl,mid,l,r);
            auto b = query(i*2+2,mid+1,sr,l,r);
            return a^b;                       //
        }
    }

    ll query(int l, int r) {
        return query(0,0,n-1,l,r);
    }
};

void solve(){
    int n,q,aux;
    cin>>n>>q;
    segtree st;
    st.init(n);
    for (int i = 0; i < n; i++){
        cin>>aux;
        st.update(i,aux);
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        a--,b--;
        cout<<st.query(a,b)<<endl;
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

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
