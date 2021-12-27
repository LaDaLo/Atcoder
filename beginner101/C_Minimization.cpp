#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;
void solve() {

}       
 
int main()
{
    fast_io;

    int N, K;
    cin >> N >> K;
    
    int idx = 0;
    for (int i = 1; i <= N; i++) {
        int val; cin >> val;
        if (val == 1) idx = i;
    }

    int res = (int)ceil( 1.0 * (idx - 1) / (K - 1) );
    res += (int)ceil( 1.0 * (N - res * (K - 1) - 1) / (K - 1) );
    cout << res;
}