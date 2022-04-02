#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, i, count = 0, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &a : v)
    {
        cin >> a;
        if ((a + k) % 7 == 0)
            count++;
    }
    cout << count;
}

int main()
{
    long long tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
