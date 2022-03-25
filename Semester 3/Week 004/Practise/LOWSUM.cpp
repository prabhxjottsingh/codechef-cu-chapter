#include <bits/stdc++.h>
#define tr(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); ++it)
#define all(c) c.begin(), c.end()
#define mod 1000000007
#define itor(c) typeof(c.begin())
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define msi multiset<int>
#define ii pair<int, int>
#define sii set<ii>
#define vii vector<ii>
#define vvi vector<vi>
#define pb push_back
#define mp make_pair

using namespace std;

vector<ll> v;

int main()
{
    ios::sync_with_stdio(false);
    ll t, i, j, n, num, k, q, ind;
    ll a[20003], b[20003];
    cin >> t;
    for (i = 0; i < t; ++i)
    {
        v.clear();
        cin >> n >> q;
        for (j = 1; j <= n; ++j)
        {
            cin >> a[j];
        }
        for (j = 1; j <= n; ++j)
        {
            cin >> b[j];
        }
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1);
        for (j = 1; j <= n; ++j)
        {
            k = 10001 / j;
            ind = min(k, n);
            num = a[j];
            for (k = 1; k <= ind; ++k)
            {
                v.pb(num + b[k]);
            }
        }
        sort(all(v));
        for (j = 1; j <= q; ++j)
        {
            cin >> num;
            cout << v[num - 1] << endl;
        }
    }
    return 0;
}
