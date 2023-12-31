#ifdef ONLINE_JUDGE
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC target("avx,avx2,fma")
#endif

#include <bits/stdc++.h>

using namespace std;

#define ln '\n'
#define ll long long
#define pp pop_back()
#define ld long double
#define nl cout << '\n'
#define _ev(x) !(x & 1)
#define pb emplace_back
#define clr(x) x.clear()
#define N ((int)2e5 + 5)
#define oo ((ll)1e17 + 9)
#define mod ((ll)1e9 + 7)
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sz(x) (int)(x).size()
#define pbk(x) push_back((x))
#define all(x) x.begin(), x.end()
#define nod(x) floor(log10(x)) + 1
#define alr(arr) arr.rbegin(), arr.rend()
#define kill(x) return void(cout << x << ln)
#define _m(ar, n) memset((ar),n,sizeof (ar))
#define db(xx) cout << #xx << ": " << xx << ln
#define _uni(v) v.erase(unique(all(v)), v.end())
#define fix(pre) cout << setprecision(pre) << fixed

void _3bbas_(string _);

template<typename T = int>
ostream &operator<<(ostream &out, const vector<T> &vec) {
    for (const T &x: vec) out << x << ' ';
    return out;
}

template<typename T = int>
istream &operator>>(istream &in, vector<T> &vec) {
    for (auto &x: vec) in >> x;
    return in;
}

int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1},
        dx8[] = {+0, +0, -1, +1, +1, +1, -1, -1},
        dy8[] = {-1, +1, +0, +0, +1, -1, +1, -1};

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

void s0lve() {


}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1;
    cin >> tst;
    while (tst--) s0lve();
    return 0;
}

void _3bbas_(string _) {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}
