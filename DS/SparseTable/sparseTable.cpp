template<class t = int, t ign = t(1e9), class merge = function<t(const t &, const t &)>>
struct sparseTable {
#define lg (32 - __builtin_clz(n))
#define blk (1 << msk)
    int n;
    vector<vector<t>> table;
    merge mrg;
    sparseTable(const vector<t> &tmp, const merge &comp) : mrg(comp), n(sz(tmp)) { build(tmp); }
    void build(const vector<t> &tmp) {
        table = vector<vector<t>>(lg + 1, vector<t>(n + 1));
        table[0] = tmp;
        for (int msk = 1; blk <= n; ++msk)
            for (int i = 0; i + blk <= n; ++i)
                table[msk][i] = mrg(table[msk - 1][i], table[msk - 1][i + blk / 2]);
    }
    t query1(int l, int r, t ans = ign) {
        int rng = r - l + 1;
        for (int msk = 0; l <= r; ++msk)
            if (rng >> msk & 1)
                ans = mrg(ans, table[msk][l]), l += blk;
        return ans;
    }
    t query2(int l, int r) {
        int msk = __lg(r - l + 1);
        return mrg(table[msk][l], table[msk][r - blk + 1]);
    }
    t query(int l, int r, bool olp = true) { return olp ? query2(l, r) : query1(l, r); }
#undef lg
#undef blk
};
// sparseTable<int> sp(v, [](int a, int b) { return min(a, b); });