vector<ll> primes(maxSize, 1);
void sieve() {
    primes[0] = primes[1] = 0;
    for (ll i = 2; (i * i) <= maxSize; ++i)
        if (primes[i])
            for (ll j = (i * i); j < maxSize; j += i)
                primes[j] = 0;
}