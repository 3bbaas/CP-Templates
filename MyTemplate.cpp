#ifdef ONLINE_JUDGE
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,avx,avx2,fma")
#define db(...)
#else
#include "debug.h"
#define db(...) cerr<<__LINE__<<" [",__(#__VA_ARGS__,__VA_ARGS__)
#endif

#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ln '\n'
#define oo (1<<30)
#define ll long long
#define pp pop_back()
#define ld long double
#define N ((int)1e4+6)
#define nl cout << '\n'
#define ooo ((ll)1e17+9)
#define mod ((ll)1e9+7)
#define pb emplace_back
#define clr(_) _.clear()
#define sz(_) (int)(_).size()
#define pbk(_) push_back((_))
#define all(_) _.begin(),_.end()
#define alr(_) _.rbegin(),_.rend()
#define nod(_) (floor(log10(_))+1)
#define ones(_) __builtin_popcount(_)
#define yn(_) cout<<(_?"YES\n":"NO\n")
#define round(_, __) ((_+(__/2ll))/__)
#define fori(__, _) for(auto &(__):(_))
#define kill(_) return void(cout<<_<<'\n')
#define fix(_) cout<<setprecision(_)<<fixed
#define init(_, __) memset((__),_,sizeof (__))
#define forp(__, ___, _) for(auto &[__,___]:(_))
#define ceil(_, __) ((((ll)_)+((ll)(__-1)))/((ll)__))
#define unq(_) sort(all(_)),_.erase(unique(all(_)), _.end())

constexpr int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1},
        dx8[] = {1, 0, -1, 0, 1, 1, -1, -1},
        dy8[] = {0, 1, 0, -1, -1, 1, -1, 1};

void _3bbas_(string _1);

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

void s0lve(int t) {

}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆
signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1;
    // cin >> tst;
    for (int i = 1; i <= tst; ++i) s0lve(i);
    return 0;
}

void _3bbas_(string _1) {
    cin.tie(0)->sync_with_stdio(0);
    /*

                 /\_/\
                (= o_o)
                 / >  \>  ta5..ta5

     */
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}