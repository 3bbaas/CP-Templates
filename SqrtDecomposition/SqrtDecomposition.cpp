#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define pb emplace_back
#define sz(_) (int)(_).size()
#define all(_) _.begin(), _.end()

void _3bbas_(string _1);

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

template<class T = int, T ignoreValue = LLONG_MAX> class SqrtDecomposition {
public:
    int sq_rt, n, len;

    vector<T> arr, blk;
    vector<vector<T>> block;
    SqrtDecomposition(int _n, vector<T> &_v) {
        sq_rt = 448; // sqrt value
        arr = _v, len = sz(_v);// vector and vector size
        blk = vector<T>(sq_rt, ignoreValue); // answer for each block
        block = vector<vector<T>>(sq_rt, {ignoreValue}); // push each block at idx / sq_rt
    }

    T merge(T a, T b) { return a + b; } // customize merge

    void build() {
        for (int i = 0; i < len; ++i) {
            block[i / sq_rt].pb(arr[i]);
            blk[i / sq_rt] = merge(blk[i / sq_rt], arr[i]);
        }
    }

    void update(int idx, T val, T ans = ignoreValue) {
        int l = idx - (idx % sq_rt); // begin for block u will update
        int r = l + sq_rt - 1; // end for block u will update
        arr[idx] = val; // update value in array
        for (int i = l; i <= r; ++i) { ans = merge(ans, arr[i]); }
        block[idx / sq_rt][idx % sq_rt] = val; // update value in block
        blk[idx / sq_rt] = ans; // update value in blk answers
    }

    T query(int l, int r, T ans = ignoreValue) {
        while (l <= r) {
            if (l % sq_rt == 0 && l + sq_rt - 1 <= r) {
                ans = merge(blk[l / sq_rt], ans);
                l += sq_rt;
            } else ans = merge(arr[l++], ans);
        }
        return ans;
    }
};
void s0lve() {
    int n; cin >> n;
    int q; cin >> q;
    vector<ll> v(n);
    for(auto &i : v) cin >> i;
    SqrtDecomposition<ll, 0ll> sq(n, v);
    sq.build();
    // ..
    // ..

}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1;
    //    cin >> tst;
    while (tst--) s0lve();
    return 0;
}

void _3bbas_(string _1) {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}