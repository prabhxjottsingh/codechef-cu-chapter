//Problem Link: https://www.codechef.com/CUPA2101/problems/ARRQUERY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long size, queries;
    cin >> size >> queries;
    vector<long long> vect(size);
    for (long long i = 0; i < size; i++)
        cin >> vect[i];
    while (queries--)
    {
        long long lower_range, higher_range, key, ans = 0;
        cin >> lower_range >> higher_range >> key;
        for (long long i = lower_range - 1; i <= higher_range - 1; i++)
        {
            if (vect[i] >= key)
            {
                ans = higher_range - i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}