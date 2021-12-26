#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;

int64_t fact(int64_t l, int64_t r) {
    int64_t res = 1;
    for (int64_t i = l; i <= r; i++) {
        res = (res * i) % mod;
    }
    return res;
}

int64_t fast_pow(int64_t a, int64_t n) {
    int64_t res = 1;
    while (n) {
        if (n % 2)
            res = (res * a) % mod;
        n /= 2;
        a = (a * a) % mod;
    }
    return res;
}

int64_t Cnk(int64_t n, int64_t k) {
    return (fact(k + 1, n) * fast_pow(fact(1, n - k), mod - 2)) % mod;
}

int main()
{
    fast_io;

    int H, W, A, B;
    cin >> H >> W >> A >> B;

    int64_t res = 0;
    int64_t prev1 = Cnk(B + (H - A) - 1, H - A - 1);
    int64_t prev2 = Cnk(A + W - B - 2, A - 1);
    int64_t t1 = B + (H - A), m1 = B + 1;
    int64_t t2 = A + W - B - 2, m2 = W - B - 1;

    for (int64_t i = 0; i < W - B; i++) {
        res = (res + prev1 * prev2) % mod;
        prev1 = (((prev1 * t1) % mod) * fast_pow(m1, mod - 2)) % mod;
        prev2 = (((prev2 * m2) % mod) * fast_pow(t2, mod - 2)) % mod;
        t1++; m1++; t2--; m2--;
    }
    cout << res;
}