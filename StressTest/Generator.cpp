#include <bits/stdc++.h>
#include "names.cpp"

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
using ll = long long;
template<typename T>
using ui = uniform_int_distribution<T>;


class Gen {
public:
    template<typename T = int>
    T get(T Min = 0, T Max = 1e8) {
        ui<T> value(Min, Max);
        return value(rng);
    }

    template<typename T = int>
    vector<T> getArr(int size, int srt = 0, T Min = 0, T Max = 1e8) {
        vector<T> vec(size);
        for (auto &i: vec) i = get<T>(Min, Max);
        if (srt == 1) { sort(vec.begin(), vec.end(), greater<>()); }
        else if (srt == 2) { sort(vec.begin(), vec.end()); }
        return vec;
    }

    char genChar(bool status = false) {
        char a = 'a', b = 'z';
        if (status == 1) { a = 'A', b = 'Z'; }
        ui<char> ret(a, b);
        return ret(rng);
    }

    string getString(int size, int upr = 0) {
        string ret;
        if (upr) for (int i = 0; i < size; ++i) { ret += genChar(true); }
        else for (int i = 0; i < size; ++i) { ret += genChar(); }
        return ret;
    }

    string getBinary(int size, bool dt = false) {
        string ret;
        while (size--)ret += to_string(get(0, 1));
        if (dt) return stoll(ret), ret;
        return ret;
    }

    string getName() {
        return Names::names[get(0, 2737)];
    }

};