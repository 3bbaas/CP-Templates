vector<pair<ll, ll>> primeFactors(ll n, ll c = 0) { // sqrt (n)
    vector<pair<ll, ll>> ret;
    for (int i = 2; (i * i) <= n; i += (1 + (i & 1))) {
        if (c = 0, n % i == 0) {
            while (n % i == 0) n /= i, c++;
            ret.pb(i, c);
        }
    }
    if (n > 1) ret.pb(n, 1);
    return ret;
}