//Time Complexity: O(t*n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], count = 0, maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                count++;
            else
            {
                maxi = max(maxi, count);
                count = 0;
            }
        }

        cout << max(count, maxi) << endl;
    }
    return 0;
}