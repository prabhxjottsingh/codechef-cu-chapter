#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int maxSumEven = 0, maxSumOdd = 0;
        i = 0;
        while (i < n)
        {
            maxSumEven += (arr[i]);
            i += 2;
        }
        i = 1;
        while (i < n)
        {
            maxSumOdd += (arr[i]);
            i += 2;
        }
        cout << max(maxSumEven, maxSumOdd) << endl;
    }
    return 0;
}
