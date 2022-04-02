#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases--)
    {
        int n, x, y, i;
        cin >> n >> x >> y;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((arr[i] <= x) && (arr[i] % y == 0))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
