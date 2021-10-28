//Problem Link: https://www.codechef.com/CUPA2101/problems/FRTIME

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, i;
    cin >> n >> m;

    vector<vector<ll>> freeTime, alice, bob;

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
    ll alice_vect_pointer = 0, bob_vect_pointer = 0;

    ll freetime = 0;

    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());

    while ((alice_vect_pointer < alice.size()) && (bob_vect_pointer < bob.size()))
    {

        if ((bob[bob_vect_pointer][0] <= alice[alice_vect_pointer][1]) && (alice[alice_vect_pointer][0] <= bob[bob_vect_pointer][1]))
        {
            temporary_vector[0] = max(alice[alice_vect_pointer][0], bob[bob_vect_pointer][0]);
            temporary_vector[1] = min(bob[bob_vect_pointer][1], alice[alice_vect_pointer][1]);
            freeTime.push_back(temporary_vector);
        }

        if (alice[alice_vect_pointer][1] > bob[bob_vect_pointer][1])
            bob_vect_pointer += 1;
        else
            alice_vect_pointer += 1;
    }
    for (i = 0; i < freeTime.size(); i++)
        freetime = freetime + freeTime[i][1] - freeTime[i][0];
    cout << freetime;
    return 0;
}