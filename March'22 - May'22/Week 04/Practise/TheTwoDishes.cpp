#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll n, s;
    cin >> n >> s;
    if (n >= s)
    {
        cout << s;
        return;
    }
    ll maxDiff = INT_MIN, i, j;
    for (i = 0; i <= n; i++)
    {
        j = s - i;
        if (j <= n)
            maxDiff = max(maxDiff, abs(i - j));
    }
    cout << maxDiff;
}

int main()
{
    oneDay
        ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
