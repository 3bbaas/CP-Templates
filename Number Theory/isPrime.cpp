bool isPrime(ll n) {
    if (n == 1 || n == 0) return 0;
    else if (n != 2 && n % 2 == 0) return 0;
    for (ll i = 2; (i * i) <= n; i++) if (n % i == 0) return 0;
    return 1;
}