#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

const int mod = 1000000007;
int main()
{
    fast_io;

    string s;
    cin >> s;
    vector<char> st;

    for (auto& c : s) {
        if (c == '0' || c == '1')
            st.push_back(c);
        else 
            if (!st.empty())
                st.pop_back();
    }

    for (auto& c : st)
        cout << c;
}