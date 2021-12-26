#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    fast_io;

    int A, B, C;
    cin >> A >> B >> C;

    int cnt5 = 0, cnt7 = 0;
    if (A == 5) cnt5++;
    if (B == 5) cnt5++;
    if (C == 5) cnt5++;
    if (A == 7) cnt7++;
    if (B == 7) cnt7++;
    if (C == 7) cnt7++;

    if (cnt5 == 2 && cnt7 == 1)
        cout << "YES";
    else
        cout << "NO";
}