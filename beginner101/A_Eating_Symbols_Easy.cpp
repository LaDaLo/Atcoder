#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;

int main()
{
    fast_io;

    string s;
    cin >> s;
    int val = 0;
    for (auto& c : s) {
        val += (c == '+' ? 1 : -1);
    }
    cout << val;
}