#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
   
int main()
{
    fast_io;

    int n, k;
    cin >> n >> k;
    vector<bool> dis(10);
    for (int i = 0; i < k; i++) {
        int val; cin >> val;
        dis[val] = true;
    }

    auto ok = [&](int v) {
        while (v) {
            if (dis[v % 10])
                return false;
            v /= 10;
        }
        return true;
    };

    int res = n;
    while (!ok(res)) {
        res++;
    }

    cout << res;
}