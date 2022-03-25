//Problem Link: https://www.codechef.com/CUPP2101/problems/QUALPREL

//Problem Link: https://www.codechef.com/CUPP2101/submit/SMPAIR

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
        int k;
        cin >> k;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        sort(arr, arr + size, greater<int>());
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= arr[k - 1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}