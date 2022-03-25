#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, x, y, count = 0;
        cin >> M >> x >> y;
        int a[M], b[101] = {0};
        for (int i = 1; i <= M; i++)
        {
            cin >> a[i];
            int z = a[i] + x * y;
            int q = a[i] - x * y;
            if (q < 1)
                q = 1;
            if (z > 101)
                z = 101;
            for (int j = a[i]; j <= z; j++)
            {
                b[j] = 1;
            }
            for (int j = q; j <= a[i]; j++)
            {
                b[j] = 1;
            }
        }
        for (int i = 1; i <= 101; i++)
        {
            if (b[i] == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}