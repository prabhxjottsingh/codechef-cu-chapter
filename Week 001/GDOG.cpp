#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, maxi = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            maxi = max(maxi, n % i);
        }
        cout << maxi << endl;
    }
    return 0;
}