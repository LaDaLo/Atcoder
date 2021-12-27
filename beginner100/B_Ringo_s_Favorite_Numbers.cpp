#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;

int64_t fast_pow(int64_t a, int64_t n) {
    int64_t res = 1;
    while (n) {
        if (n % 2)
            res *= a;
        n /= 2;
        a *= a;
    }
    return res;
}      
 
int main()
{
    fast_io;

    int D, N;
    cin >> D >> N;

    if (N == 100)
        cout << fast_pow(10, D * 2) * (N + 1);
    else
        cout << fast_pow(10, D * 2) * N;
}