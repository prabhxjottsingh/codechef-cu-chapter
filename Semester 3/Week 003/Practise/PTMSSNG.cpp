//Problem Link: https://www.codechef.com/CUPP2101/problems/PTMSSNG

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll size, m = 0, k = 0;
        cin >> size;
        ll l = 2 * (4 * size - 1);
        ll arr[l / 2], b[l / 2];
        for (ll i = 0; i < l; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                arr[m] = x;
                m++;
            }
            else
            {
                b[k] = x;
                k++;
            }
        }
        sort(arr, arr + l / 2);
        sort(b, b + l / 2);
        for (ll i = 0; i < l / 2 + 1; i = i + 2)
        {
            if (arr[i] != arr[i + 1])
            {
                cout << arr[i] << " ";
                break;
            }
        }
        for (ll i = 0; i < l / 2 + 1; i = i + 2)
        {
            if (b[i] != b[i + 1])
            {
                cout << b[i];
                break;
            }
        }
        cout << endl;
    }
    return 0;
}