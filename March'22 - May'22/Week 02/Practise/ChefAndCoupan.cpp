#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases--)
    {
        int delivery, coupan, i;
        int a[3], b[3];
        int costA = 0, costB = 0;
        cin >> delivery >> coupan;
        for (i = 0; i < 3; i++)
        {
            cin >> a[i];
            costA += a[i];
        }
        for (i = 0; i < 3; i++)
        {
            cin >> b[i];
            costB += b[i];
        }
        bool coupanBuy = false;
        if (costA >= 150 && costB >= 150)
        {
            if (costA + delivery + costB + delivery > costB + costA + coupan)
                coupanBuy = true;
        }
        else if (costA >= 150 || costB >= 150)
        {
            if (costA + delivery + costB + delivery > costA + coupan + costB + delivery)
                coupanBuy = true;
        }
        if (coupanBuy)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
