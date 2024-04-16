struct modifiedSieve { // spf
    int com[maxSize];

    modifiedSieve() { sieve(); }

    void sieve() {
        iota(com, com + maxSize, 0);

        com[0] = com[1] = -1;
        for (int i = 2; (i * i) < maxSize; ++i)
            if (com[i] == i)
                for (int j = i * i; j < maxSize; j += i)
                    if (com[j] == j)
                        com[j] = i;
    }

    vector<int> factorize(int n) {
        vector<int> ret;
        while (n > 1)
            ret.pb(com[n]), n /= com[n];
        return ret;
    }

    vector<pair<int, int>> factorizeFrq(int n) {
        vector<pair<int, int>> ret;
        while (n > 1) {
            int cnt = 0, cur = com[n];
            while (n % cur == 0)
                ++cnt, n /= cur;
            ret.pb(cur, cnt);
        }
        return ret;
    }
} ms;