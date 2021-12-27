#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;

int main()
{
    fast_io;

    int N, M;
    cin >> N >> M;
    vector<vector<int64_t>> A(N, vector<int64_t>(3));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    int64_t res = 0;

    for (int i = 0; i < 8; i++) {
        priority_queue<int64_t> q;
        int64_t val = 0;
        int64_t a = ( (i & (1 << 2)) == 0 ? -1 : 1);
        int64_t b = ( (i & (1 << 1)) == 0 ? -1 : 1);
        int64_t c = ( (i & (1 << 0)) == 0 ? -1 : 1);
        for (auto& v : A) {
            q.push(v[0] * a + v[1] * b + v[2] * c);
        }

        for (int i = 0; i < M; i++) {
            val += q.top(); q.pop();
        }
        res = max(res, val);
    }

    cout << res;
    //change//
}