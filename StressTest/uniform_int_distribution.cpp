#include <bits/stdc++.h>
#include <random>

using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
using ll = long long;

int main() {

    int a = 1, b = 1e8;
    uniform_int_distribution<int> G(a, b);
    cout << ".A Rnd = " << G.a() << '\n';
    cout << ".B Rnd = " << G.b() << '\n';
    for (int i = 0; i < 10; ++i) {
        cout << "- Rnd " << i << " -> " << G(rng) << '\n';
    }
    cout << "Max Rnd = " << G.max() << '\n';
    cout << "Min Rnd = " << G.min() << '\n';
    cout << "------------------------------------------\n";
    ll c = 1e18;
    uniform_int_distribution<ll> G2(a, c);
    cout << "Min Rnd = " << G2.a() << '\n';
    cout << "Max Rnd = " << G2.b() << '\n';
    for (int i = 0; i < 10; ++i) {
        cout << "- Rnd " << i << " -> " << G2(rng) << '\n';
    }
    cout << "------------------------------------------\n";
    float d = 0.0, e = 10000.0;
    uniform_real_distribution<float> G3(d, e);
    cout << "Min Rnd = " << G3.a() << '\n';
    cout << "Max Rnd = " << G3.b() << '\n';
    for (int i = 0; i < 10; ++i) {
        cout << "- Rnd " << i << " -> " << fixed << setprecision(3) << G3(rng) << '\n';
    }
    cout << "------------------------------------------\n";
    return 0;
}
