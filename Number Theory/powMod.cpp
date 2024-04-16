ll powMod(ll x, ll y, ll res = 1) {
    while (y) {
        if (y & 1) res = (res * x) % mod;
        y >>= 1, x = (x * x) % mod;
    }
    return res;
}