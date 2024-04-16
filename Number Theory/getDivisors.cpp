vector<ll> divisors(ll n) {
    vector<ll> ret;
    for (ll i = 1; (i * i) <= n; i++) {
        if (n % i == 0) {
            ret.pb(i);
            if (i * i != n) ret.pb(n / i);
        }
    }
    return ret;
}