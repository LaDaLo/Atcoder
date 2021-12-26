#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;

int main()
{
    fast_io;

    int N, L;
    cin >> N >> L;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (auto& s : arr) {
        cout << s;
    }
}