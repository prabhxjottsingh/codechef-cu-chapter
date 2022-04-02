#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, d;
    cin >> n >> d;
    ll arr[n];
    ll count = 0;
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (ll i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= d)
        {
            i++;
            count++;
        }
    }
    cout << count;
    return 0;
}