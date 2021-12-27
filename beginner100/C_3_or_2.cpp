#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;
   
int main()
{
    fast_io;

    int N, val;
    cin >> N;
    int res = 0;
    for (int i = 0; i < N; i++) {
        cin >> val;
        while (val % 2 == 0) {
            res++;
            val /= 2;
        }
    } 

    cout << res;
}