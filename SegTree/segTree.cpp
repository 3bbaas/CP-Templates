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
