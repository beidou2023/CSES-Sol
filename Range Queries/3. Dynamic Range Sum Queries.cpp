#include <bits/stdc++.h>

#define int                 ll
#define mp                  make_pair
#define pb                  push_back
#define all(a)              (a).begin(), (a).end()
#define sz(a)               (int)a.size()
#define mod(a)              md(a, MOD)
#define srt(a)              sort(all(a))
#define mem(a, h)           memset(a, (h), sizeof(a))
#define forn(i, n)          for(int i = 0; i < n; i++)
#define fore(i, b, e)       for(int i = b; i < e; i++)
#define forev(i, e, b)      for(int i = e; i > b; i--)
#define forg(i, b, e, m)    for(int i = b; i < e; i+=m)
#define index               int mid = (b + e) / 2, l = node * 2 + 1, r = l + 1;
#define DBG(x)              cerr<<#x<<" = "<<(x)<<endl
#define RAYA                cout<<"=============================="<<'\n'
#define fast                ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long                   ll;
typedef long double                 ld; 
typedef unsigned long long          ull;
typedef pair<int, int>              ii;
typedef pair<pair<int, int>, int>   iii;
typedef vector<int>                 vi;
typedef vector<ii>                  vii;
typedef vector<ll>                  vll;

const int tam       =   200010;
const int MOD       =   1000000007;
const int MOD1      =   998244353;
const double DINF   =   1e100;
const double EPS    =   1e-9;
const double PI     =   acos(-1);
int cases           =   0;

//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

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
                tree[i]=(tree[i*2+1]+tree[i*2+2]);   //
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
            return a+b;                       //
        }
    }

    ll query(int l, int r) {
        return query(0,0,n-1,l,r);
    }
};

void solve(){
    int n,q,aux;
    cin>>n>>q;
    vector<int>nums;
    segtree st;
    st.init(n);
    for (int i = 0; i < n; i++){
        cin>>aux;
        nums.push_back(aux);
        st.update(i,aux);
    }
    while(q--){
        int k,a,b;
        cin>>k>>a>>b;
        if(k==1){
            a--;
            st.update(a,b-nums[a]);
            nums[a]=b;
        }
        else{
            a--,b--;
            cout<<st.query(a,b)<<endl;
        }
    }
}

signed main(){
    fast;
    int tt=1;
    // cin>>tt;
    while(tt--){
        cases++;
        solve();
    }
    return 0;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
