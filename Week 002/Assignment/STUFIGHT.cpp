// O(t*(n + n*log n)

#include <bits/stdc++.h>
using namespace std;

#define nline cout << "\n";

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int no_of_students;
        cin >> no_of_students;
        int Arr[no_of_students];
        for (int i = 0; i < no_of_students; i++)
        {
            cin >> Arr[i];
        }
        sort(Arr, Arr + no_of_students);
        if (Arr[no_of_students - 1] == Arr[no_of_students - 2])
            cout << "fight:(";
        else
            cout << "peace:)";
        nline;
    }
    return 0;
}