#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;
     
int main()
{
    fast_io;

    int A, B;
    cin >> A >> B;

    if (A > 8 || B > 8)
        cout << ":(";
    else
        cout << "Yay!";
}