#include<ext/numeric>
using namespace __gnu_cxx;
struct Mul {
    int MOD = 1e9 + 7;
    ll operator()(ll a, ll b) { return a * b % MOD; }
};
int identity_element(const Mul &) { return 1; }
/*
 * Mul ml;
 * power(x, y, ml); // x ^ y
*/