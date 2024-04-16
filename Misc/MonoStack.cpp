int n;
vector<int> v, ans;
void monStack() {
    vector<int> tmp(n, -1);
    stack<int> mon;
    for (int i = n - 1; ~i; --i) { // next
        while (sz(mon) && v[mon.top()] <= v[i]) mon.pop(); // GreaterElement
        if (sz(mon)) ans[i] = v[mon.top()];
        else ans[i] = -1;
        mon.push(i);
    }
}