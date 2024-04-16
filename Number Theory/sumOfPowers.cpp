ll sumOfPowers(ll a, int k) {
    if (k == 0) return 0;
    if (k % 2 == 1) return a * (1 + sumOfPowers(a, k - 1));
    ll half = sumOfPowers(a, k / 2);
    return half * (1 + half - sumOfPowers(a, k / 2 - 1));
}