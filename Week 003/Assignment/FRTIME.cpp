//Problem Link: https://www.codechef.com/CUPA2101/problems/FRTIME

//using 2D-arrays

//Problem Link: https://www.codechef.com/CUPA2101/problems/FRTIME

//Using Vectors
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, i;
    cin >> n >> m;

    array<ll, 2> alice[n], bob[m];

    for (i = 0; i < n; i++)
    {
        cin >> alice[i][0] >> alice[i][1];
    }

    for (i = 0; i < m; i++)
    {
        cin >> bob[i][0] >> bob[i][1];
    }

    sort(alice, alice + n);
    sort(bob, bob + m);

    ll alice_pointer = 0, bob_pointer = 0;
    ll freetime = 0;

    while ((alice_pointer < n) && (bob_pointer < m))
    {
        int tempa, tempb;
        tempa = max(alice[alice_pointer][0], bob[bob_pointer][0]);
        tempb = min(bob[bob_pointer][1], alice[alice_pointer][1]);

        if (tempb > tempa)
        {
            freetime = freetime + tempb - tempa;
        }

        if (alice[alice_pointer][1] > bob[bob_pointer][1])
            bob_pointer += 1;
        else
            alice_pointer += 1;
    }
    cout << freetime;
    return 0;
}

//<----------------------------------Using Vectors------------------------------------>

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, i;
    cin >> n >> m;

    vector<vector<ll>> alice, bob;

    for (i = 0; i < n; i++)
    {
        vector<ll> temporary_vector;
        ll x, y;
        cin >> x >> y;
        temporary_vector.push_back(x);
        temporary_vector.push_back(y);
        alice.push_back(temporary_vector);
    }

    for (i = 0; i < m; i++)
    {
        vector<ll> temporary_vector;
        ll x, y;
        cin >> x >> y;
        temporary_vector.push_back(x);
        temporary_vector.push_back(y);
        bob.push_back(temporary_vector);
    }

    vector<ll> temporary_vector(2);

    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());

    ll alice_vect_pointer = 0, bob_vect_pointer = 0;
    ll freetime = 0;

    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());

    while ((alice_vect_pointer < alice.size()) && (bob_vect_pointer < bob.size()))
    {
        temporary_vector[0] = max(alice[alice_vect_pointer][0], bob[bob_vect_pointer][0]);
        temporary_vector[1] = min(bob[bob_vect_pointer][1], alice[alice_vect_pointer][1]);

        if (temporary_vector[1] > temporary_vector[0])
        {
            freetime = freetime + temporary_vector[1] - temporary_vector[0];
        }

        if (alice[alice_vect_pointer][1] > bob[bob_vect_pointer][1])
            bob_vect_pointer += 1;
        else
            alice_vect_pointer += 1;
    }
    cout << freetime;
    return 0;
}