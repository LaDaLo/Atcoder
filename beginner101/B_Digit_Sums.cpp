#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    fast_io;

    int N, tmp;
    cin >> N;
    tmp = N;
    int sum = 0;
    while (N) {
        sum += N % 10;
        N /= 10;
    }

    cout << (tmp % sum == 0 ? "Yes" : "No");
}