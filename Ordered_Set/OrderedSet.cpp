#ifdef ONLINE_JUDGE
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC target("avx,avx2,fma")
#endif

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
#define nod(x) (floor(log10(x)) + 1)
#define alr(arr) arr.rbegin(), arr.rend()
#define kill(x) return void(cout << x << ln)
#define _m(ar, n) memset((ar),n,sizeof (ar))
#define db(xx) cout << #xx << ": " << xx << ln
#define _uni(v) v.erase(unique(all(v)), v.end())
#define fix(pre) cout << setprecision(pre) << fixed

template<typename T>
using orderedSetPBDS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

template<typename T>
class orderedSet {
public:

    orderedSetPBDS<T> __os;

    orderedSet() { __os.clear(); }

    void clear() { __os.clear(); }

    int siz() { return __os.size(); }

    orderedSetPBDS<T> am() { return __os; }

    void erase(T __item) { __os.erase(__item); }

    void push(T __item) { __os.insert(__item); }

    int lwr(T __item) { return __os.lower_bound(__item) != __os.end() ? *__os.lower_bound(__item) : -1; }

    int upr(T __item) { return __os.upper_bound(__item) != __os.end() ? *__os.upper_bound(__item) : -1; }

    int find(T __item) { return __os.order_of_key(__item); }

    T operator[](int __idx) { return *__os.find_by_order(__idx); }

    friend ostream &operator<<(ostream &out, const orderedSet &os) {
        for (const T x: os.__os)
            out << x << ' ';
        return out;
    }
};

void s0lve() {

    orderedSet<int> os;
    int n; cin >> n; // 5
    for (int a, i = 0; i < n; ++i) { cin >> a; os.push(a); } // 11 22 33 44 55

    cout << " => OrderedSet : " << os << "\n"; //  => OrderedSet : 11 22 33 44 55
    cout << " => Size : " << os.siz() << "\n"; //  => Size : 5

    cout << " => Index of \"33\" : " << os.find(33) << "\n"; //  => Index of "33" : 2
    cout << " => Get Value of index \"2\" : " << os[2] << "\n"; //  => Get Value of index "2" : 33

    cout << " => Get first element >= \"44\" : " << os.lwr(44) << "\n"; // => Get first element >= "44" : 44
    cout << " => Get first element >= \"20\" : " << os.lwr(20) << "\n"; // => Get first element >= "20" : 22
    cout << " => Get first element >= \"66\" : " << os.lwr(66) << "\n"; // => Get first element >= "66" : -1

    cout << " => Get first element >  \"20\" : " << os.upr(20) << "\n"; // => Get first element >  "20" : 22
    cout << " => Get first element >  \"55\" : " << os.upr(55) << "\n"; // => Get first element >  "44" : -1

    cout << " => Return OrderedSet : [";
    for (auto &i : os.am()){
        if (os.upr(i) != -1)
            cout << i << ", ";
        else
            cout << i << "]\n";
    }
}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1;
//    cin >> tst;
    while (tst--) s0lve();
    return 0;
}

inline void _3bbas_(string _) {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}
