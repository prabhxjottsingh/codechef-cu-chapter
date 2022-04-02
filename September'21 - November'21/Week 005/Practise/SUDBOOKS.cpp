//Problme Link: https://www.codechef.com/CUPP2101/problems/SUDBOOKS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no_of_operations;
    cin >> no_of_operations;
    stack<int> stack;
    while (no_of_operations--)
    {
        int val;
        cin >> val;
        if (val == 1)
        {
            int val_to_be_inserted;
            cin >> val_to_be_inserted;
            stack.push(val_to_be_inserted);
        }
        else
        {
            if (!stack.empty())
            {
                cout << stack.top();
                stack.pop();
            }
            else
                cout << "kuchbhi?";
            cout << endl;
        }
    }
}