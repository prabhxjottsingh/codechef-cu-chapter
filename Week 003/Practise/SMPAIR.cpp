//Problem Link: https://www.codechef.com/CUPP2101/problems/SMPAIR

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        cout << arr[0] + arr[1] << endl;
    }
    return 0;
}