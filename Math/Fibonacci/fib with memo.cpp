ll dp[int(1e3)];
ll fib(ll n) {
    if (n <= 1) return n;
    ll &ret = dp[n];
    if(~ret) return ret;
    return ret = fib(n - 1) + fib(n - 2);
}
// memset(dp, -1, sizeof dp);