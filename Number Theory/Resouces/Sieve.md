# Sieve of Eratosthenes

> ## Benfits
>
> - Time Complexity: $O(n \log \log n)$

---

### Code

```cpp
const int maxSize = 1e8 + 10;
vector<bool> primes(maxSize, true);

void sieve() {
    primes[0] = primes[1] = false;
    for (int i = 2; (i * i) <= maxSize; ++i)
        if (primes[i])
            for (int j = (i * i); j < maxSize; j += i)
                primes[j] = false;
}
```

---

### Problems

| Problem                                                         | src        | sol |
|-----------------------------------------------------------------|------------|-----|
| [Printing some primes](https://www.spoj.com/problems/TDPRIMES/) | spoj       | -   |
| [Almost Prime](https://codeforces.com/contest/26/problem/A)     | Codeforces | -   |

---

### Sources

1. [CP Algorithm](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html)