#ifdef ONLINE_JUDGE
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,avx,avx2,fma")
#define db(...)
#else
#include "debug.h"
#define db(...) cerr<<__LINE__<<" [",__(#__VA_ARGS__,__VA_ARGS__)
#endif

#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ln '\n'
#define ll long long
#define pp pop_back()
#define ld long double
#define nl cout << '\n'
#define ev(_) !(_ & 1)
#define pb emplace_back
#define clr(_) _.clear()
#define N ((int)2e6)
#define oo ((ll)1e17 + 9)
#define mod ((ll)1e9 + 7)
#define sz(_) (int)(_).size()
#define pbk(_) push_back((_))
#define all(_) _.begin(), _.end()
#define alr(_) _.rbegin(), _.rend()
#define nod(_) (floor(log10(_)) + 1)
#define ones(_) __builtin_popcount(_)
#define fori(__, _) for(auto &(__):(_))
#define yn(_) cout << (_?"YES\n":"NO\n")
#define kill(_) return void(cout << _ << ln)
#define init(_, __) memset((__),_,sizeof (__))
#define fix(_) cout << setprecision(_) << fixed
#define forp(__, ___, _) for(auto &[__,___]:(_))
#define unq(_) sort(all(_)),_.erase(unique(all(_)), _.end())

void _3bbas_(string _1);

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

template<typename T = ll, T ign = 0> class Segment_Tree {
#define L(_) 2*_+1
#define R(_) 2*_+2
#define m(l, r) (l+((r-l)>>1))
    vector<T> __seg;
    int siz;
private:
    T merge(T __val__1, T __val__2) {
        return min(__val__1, __val__2);
    }
    void build(vector<T> &__v, int idx, int __l, int __r) {
        if (__l == __r) {
            if (__l < int(__v.size())) __seg[idx] = __v[__l];
            return;
        }
        build(__v, L(idx), __l, m(__l, __r));
        build(__v, R(idx), m(__l, __r) + 1, __r);
        __seg[idx] = merge(__seg[L(idx)], __seg[R(idx)]);
    }
    void update(int __l, int __r, int nd, int idx, T val) {
        if (__l == __r) {
            __seg[nd] = val;
            return;
        }
        if (m(__l, __r) < idx) update(m(__l, __r) + 1, __r, R(nd), idx, val);
        else update(__l, m(__l, __r), L(nd), idx, val);
        __seg[nd] = merge(__seg[L(nd)], __seg[R(nd)]);
    }
    T query(int __l, int __r, int __nd, int l, int r) {
        if (__l > r || __r < l) return ign;
        if (__l >= l && __r <= r) return __seg[__nd];
        T __tmp__1 = query(__l, m(__l, __r), L(__nd), l, r);
        T __tmp__2 = query(m(__l, __r) + 1, __r, R(__nd), l, r);
        return merge(__tmp__1, __tmp__2);
    }
public:
    Segment_Tree(vector<T> &__v) {
        siz = 1;
        int n = (int) __v.size();
        while (siz < n) siz <<= 1;
        __seg = vector<T>(siz << 1, ign);
        build(__v, 0, 0, siz - 1);
    }

    T query(int l, int r) { return query(0, siz - 1, 0, l, r); }
    void update(int __idx, T __val) { update(0, siz - 1, 0, __idx, __val); }
    T operator[](int __idx) { return query(__idx, __idx); }

#undef L
#undef R
#undef m
};
//    vector<ll> v(n);
//    Segment_Tree<ll, (ll)1e9+7)> tree(v); tree.query(l, r); tree.update(idx, val);

void s0lve() {

}
/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1;
    cin >> tst;
    while (tst--) s0lve(), cout << '\n';
    return 0;
}

void _3bbas_(string _1) {
    cin.tie(0), cout.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}