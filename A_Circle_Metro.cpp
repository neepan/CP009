// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define fr1(i, n) for (lli i = 1; i < n; i++)
#define fr3(i, n) for (lli i = 0; i <= n; i++)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;
using ch = char;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    // Simulate the movement of Daniel and Vlad
    while (a != x && b != y)
    {
        if (a == b)
        {
            cout << "YES" << endl;
            return 0;
        }

        // Move Daniel forward in clockwise direction
        a = (a == n) ? 1 : a + 1;

        // Move Vlad backward in counterclockwise direction
        b = (b == 1) ? n : b - 1;
    }

    // Check one last time when one of them reaches their destination
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/* Approach:

    Start with Daniel at station a and Vlad at station b.
    Move Daniel to the next station in the clockwise direction: from a to x. If Daniel is at station n, he will move to station 1.
    Move Vlad to the next station in the counterclockwise direction: from b to y. If Vlad is at station 1, he will move to station n.
    In each step, check if both are at the same station.
    If they meet at the same station at any moment, print "YES" and stop the simulation.
    If they reach their respective destinations without meeting, print "NO".*/