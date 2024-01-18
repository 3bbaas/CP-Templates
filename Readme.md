# Code Templates

## Table of content

- [Code Templates](#code-templates)
    - [Table of content](#table-of-content)
        - [Number Theory](#number-theory)
        - [Tutorials](#tutorials)
        - [Check number if prime or not](#check-number-if-prime-or-not)
        - [**Prime Factorization**](#prime-factorization)
        - [**Get Divisors**](#get-divisors)
        - [Sieve of Eratosthenes](#sieve-of-eratosthenes)
        - [Power](#power)
        - [Power with mod](#power-with-mod)
        - [GCD](#gcd)
        - [SPF](#spf)
        - [Sum of powers](#sum-of-powers)
        - [Check Number if perfect square](#check-number-if-perfect-square)
    - [Math](#math)
        - [Factorial](#factorial)

---

### Number Theory

### Tutorials

| Source                    | Content                                                            | Type  | link                                                                 |
|---------------------------|--------------------------------------------------------------------|-------|----------------------------------------------------------------------|
| Mahmoud Ayman's Session 1 | *Divisors, GCD, LCM, Prime Factorization, Pow, PowMod, Sieve, lpf* | Video | [link](https://youtu.be/-ptnoz7Us_I?si=hDSCoXu97gNR6PPm)             |
| Mahmoud Ayman's Session 2 | *Modular Arithmetic, ...*                                          | Video | [link](https://youtu.be/n8_mqm2amzY?si=ck64qVKtoZsFRCd8)             |
| Mostafa Saad              | _Primes_                                                           | Video | [link](https://youtu.be/VZBfW08ECgA)                                 |
| Mostafa Saad              | _Factorization_                                                    | Video | [link](https://youtu.be/-5ApOQDhBtU)                                 |
| Mostafa Saad              | _Fib, GCD, LCM, Pow_                                               | Video | [link](https://youtu.be/YklnFXpq0ZE?si=2ueThtekooj1o5uU)             |
| Muhammed Afifi            | _Prime factorization using Sieve_                                  | Video | [link](https://youtu.be/xUk2SggGDRc?si=rjt_Bjb3PYAmktZW)             |
| CP-Algorithm              | _sieve-of-eratosthenes_                                            | Blog  | [link](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html) |
| CP-Algorithm              | _Divisors_                                                         | Blog  | [link](https://cp-algorithms.com/algebra/divisors.html)              |
| Hazem Adel's Session      | _Primes, Sieve, Divisors, Spf, Factorization_                      | Video | [link](https://youtu.be/sFxWQ73khKs?si=A9hHlnURB4Mc36b5)             |

---

### Check number if prime or not

Idea:
> loop on all numbers if number satisfy 2 conditions `n > 2` because `1` and `0` aren't primes :) if each one reminder
> from number when modulus from 3 to sqrt(n) equals zero that `return 0`isn't prime :).

Complexity time: $O( \sqrt n )$

Code:

```cpp
bool isPrime(ll n) {
    if (n == 1 || n == 0)return 0;
    else if (n != 2 && n % 2 == 0)return 0;
    for (ll i = 2; (i * i) <= n; i++) {
        if (n % i == 0)return 0;
    }
    return 1;
}
```

---

### **Prime Factorization**

Idea:
> create vector of pairs to store factors of num then looping from $2$ to $\sqrt n$ and if

Complexity time: $O( \sqrt n )$

Code:

```cpp
template<typename T = int> using veprs = vector<pair<T, T>>;
veprs<ll> primeFactors(ll n) { // sqrt (n)
    veprs<ll> ret;
    for (int i = 2; (i * i) <= n; i += (1 + (i & 1))) {
        if (n % i == 0) {
            ll c = 0;
            while (n % i == 0)
                n /= i, c++;
            ret.pb(i, c);
        }
    }
    if (n > 1)
        ret.pb(n, 1);
    return ret;
}
```

---

### **Get Divisors**

Idea:
> $\cdots$

Complexity time: $O( \sqrt n )$

Code:

```cpp
vector<ll> divisors(ll n) {
    vector<ll> ret;
    for (ll i = 1; (i * i) <= n; i++) {
        if (n % i == 0) {
            ret.pb(i);
            if (i * i != n)
                ret.pb(n / i);
        }
    }
    return ret;
}
```

---

### Sieve of Eratosthenes

Idea:
> $\cdots$

Complexity time: $O( n \log \log n )$

Code:

```cpp
vector<ll> primes(maxSize, 1);
void sieve() {
    primes[0] = primes[1] = 0;
    for (ll i = 2; (i * i) <= maxSize; ++i)
        if (primes[i])
            for (ll j = (i * i); j < maxSize; j += i)
                primes[j] = 0;
}
```

---

### Power

Idea:
> $\cdots$

Complexity time: $\cdots$

Code:

```cpp
ll power(ll a, ll b) {
    if (b == 0)return 1;
    if (b == 1)return a;
    ll ret = 1;
    if (b % 2)ret = a;
    ll val = power(a, b / 2);
    return ret * val * val;
}
```

---

### Power with mod

Idea:
> $\cdots$

Complexity time: $\cdots$

Code:

```cpp
ll powMod(ll x, ll y) {
    ll ret = x, ans = 1;
    while (y) {
        if (y % 2) ans *= ret, ans %= mod;
        ret *= ret, ret %= mod;
        y >>= 2;
    }
    return ans;
}
```

---

### GCD

Idea:
> $\cdots$

Complexity time: $O( \log n )$

Code:

```cpp
ll gcd(ll a, ll b) {
    if (a > b) swap(a, b);
    if (a == 0)return b;
    return gcd(b % a, a);
}
```

---

### SPF

Idea:
> get prime factors of number and gen all prime factors

Complexity time: $O( \log n )$

Code:

```cpp
struct modifiedSieve { // spf
    int com[maxSize];

    modifiedSieve() { sieve(); }

    void sieve() {
        iota(com, com + maxSize, 0);

        com[0] = com[1] = -1;
        for (int i = 2; (i * i) < maxSize; ++i)
            if (com[i] == i)
                for (int j = i * i; j < maxSize; j += i)
                    if (com[j] == j)
                        com[j] = i;
    }

    vector<int> factorize(int n) {
        vector<int> ret;
        while (n > 1)
            ret.pb(com[n]), n /= com[n];
        return ret;
    }

    vector<pair<int, int>> factorizeFrq(int n) {
        vector<pair<int, int>> ret;
        while (n > 1) {
            int cnt = 0, cur = com[n];
            while (n % cur == 0)
                ++cnt, n /= cur;
            ret.pb(cur, cnt);
        }
        return ret;
    }
} ms;
```

<details> 

<summary>Hint</summary>

```cpp
   iota (arr, arr + sizeOfArray, initValue);
```

is equivalent to

```cpp
    com[0] = initValue;
for (int i = 0; i < sizeOfArray - 1; ++i) {
com[i + 1] += com[i] + 1;
}
```

</details>

---

### Sum of powers

Idea:
> $\cdots$

Complexity time: $O(power)$

Code:

```cpp
ll sumOfPowers(ll a, int k) {
    if (k == 0) return 0;
    if (k % 2 == 1) return a * (1 + sumOfPowers(a, k - 1));
    ll half = sumOfPowers(a, k / 2);
    return half * (1 + half - sumOfPowers(a, k / 2 - 1));
}
```

---

### Check Number if perfect square

Idea:
> $\cdots$

Complexity time:

Code:

```cpp
bool PerSq(long double x) {
    return (((long double) sqrt(x) - floor((long double) sqrt(x))) == 0);
}
```

## Math

### Factorial

Idea:
> ...

Complexity time: $\cdots$

Code:

```cpp
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}
```

---