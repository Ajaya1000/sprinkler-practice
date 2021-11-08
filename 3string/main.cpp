// @itsAj
#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define endl '\n'
#define rep(i, x, y) for (auto i = x; i <= y; i++)
#define repi(i, x, y) for (auto i = x; i >= y; i--)
#define for_each(v, a) for (auto &v : a)
#define arr_in(a) for_each(v, a) cin >> v
#define pii pair<int, int>
#define ff first
#define ss second
#define u_map unordered_map
#define u_set unordered_set

// define the size of the set bit
#define B 40
//

#define mod 1000000007

typedef unsigned long long ull;
typedef long long ll;
using namespace std;
// using namespace boost::multiprecision;

template <typename T>
inline T modv(T v, T m) { return ((v % m) + m) % m; }

/*
    workplace start from here
*/

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    char suf[n + 1];

    suf[n] = 'z' + 1;
    for (int i = n - 1; i >= 0; i--)
    {
        suf[i] = suf[i + 1];
        if (s[i] < suf[i])
            suf[i] = s[i];
    }
    string b;
    stack<char> ss;

    for (int i = 0; i < n; i++)
    {
        ss.push(s[i]);

        while (!ss.empty() && ss.top() <= suf[i + 1])
        {
            b.push_back(ss.top());
            ss.pop();
        }
    }

    cout << b;
}
int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    fastio;

    test
    {
        solve();
        cout << endl;
    }

    return 0;
}