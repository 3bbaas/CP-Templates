#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template<typename T, typename ordered = less<T>>
using orderedSetPBDS = tree<T, null_type, ordered, rb_tree_tag, tree_order_statistics_node_update>;

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

template<typename T, typename ordered = less<T>>
class orderedSet {
private:
    bool isEmpty() { return __os.empty(); }

public:

    orderedSetPBDS<T, ordered> __os;

    orderedSet() { __os.clear(); }

    void clear() { __os.clear(); }

    int siz() { return __os.size(); }

    orderedSetPBDS<T, ordered> am() { return __os; }

    bool erase(T __item) { if (!isEmpty()) { __os.erase(__item); return 1; } else return 0; }

    inline void push(T __item) { __os.insert(__item); }

    void create(vector<T> &__vec) { for (const T &i: __vec) __os.insert(i); }

    int find(T __item) { return __item == *__os.find_by_order(__os.order_of_key(__item)) ? __os.order_of_key(__item) : -1; }

    T operator[](int __idx) { return *__os.find_by_order(__idx); }

    void operator=(vector<T> const &__vec) { for (const T &__i: __vec) __os.insert(__i); }

    int lwr(T __item) { return __os.lower_bound(__item) != __os.end() ? *__os.lower_bound(__item) : -1; }

    int upr(T __item) { return __os.upper_bound(__item) != __os.end() ? *__os.upper_bound(__item) : -1; }

    friend ostream &operator<<(ostream &out, const orderedSet &os) { for (const T x: os.__os) out << x << ' '; return out; }
};

void s0lve() {


//    orderedSet<int, less<int>> os2; // already by default use as set
//    orderedSet<int, less_equal<int>> os;
//    orderedSet<int, greater<int>> os3;
//    orderedSet<int, greater_equal<int>> os4;

    orderedSet<int> os;// already by default use as set

    //    int n;
//    cin >> n; // 5
//    for (int a, i = 0; i < n; ++i) {
//        cin >> a;
//        os.push(a);
//    } // 11 22 33 44 55

    vector<int> v = {11, 22, 33, 44};

    os = v; //    os.create(v);

    cout << " => OrderedSet : " << os << "\n"; //  => OrderedSet : 11 22 33 44 55
    cout << " => Size : " << os.siz() << "\n"; //  => Size : 5

    cout << " => Index of \"33\" : " << os.find(33) << "\n"; //  => Index of "33" : 2
    cout << " => Index of \"33\" : " << os.find(34) << "\n"; //  => Index of "33" : 2
    cout << " => Index of \"33\" : " << os.find(35) << "\n"; //  => Index of "33" : 2
    cout << " => Get Value of index \"2\" : " << os[2] << "\n"; //  => Get Value of index "2" : 33

    cout << " => Get first element >= \"44\" : " << os.lwr(44) << "\n"; // => Get first element >= "44" : 44
    cout << " => Get first element >= \"20\" : " << os.lwr(20) << "\n"; // => Get first element >= "20" : 22
    cout << " => Get first element >= \"66\" : " << os.lwr(66) << "\n"; // => Get first element >= "66" : -1

    cout << " => Get first element >  \"20\" : " << os.upr(20) << "\n"; // => Get first element >  "20" : 22
    cout << " => Get first element >  \"55\" : " << os.upr(55) << "\n"; // => Get first element >  "44" : -1

    cout << " => Return OrderedSet : [";
    for (auto &i: os.am()) {
        if (os.upr(i) != -1)
            cout << i << ", ";
        else
            cout << i << "]\n";
    }

}
/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    s0lve();
    return 0;
}