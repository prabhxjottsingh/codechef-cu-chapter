#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        ll a[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] % y == 0) && (a[i] <= x))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}