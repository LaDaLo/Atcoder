#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;
int main()
{
    fast_io;

    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 2]) {
            cout << i + 1 << " " << i + 3;
            return 0;
        }
        if (s[i] == s[i + 1]) {
            cout << i + 1 << " " << i + 2;
            return 0;
        }
    }

    cout << -1 << " " << -1;
    return 0;
}