#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;
int main()
{
    fast_io;

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    auto cal = [&](int m) {
        int res = 0;
        for (auto& v : arr) {
            res += (v - m) * (v - m);
        }
        return res;
    };

    int res = INT_MAX;
    for (int i = -100; i <= 100; i++) {
        res = min(res, cal(i));
    }
    cout << res;
}