#define debug(x) cout << '>' << #x << ':' << x << endl;

#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()

using lli = long long int;
using mytype = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t, v;
    cin >> t >> v;

    lli cost = 0;
    lli remaining_lit = t - 1;

    for (lli i = t - 1; i >= 1; i--)
    {
        lli tofill = min(v, remaining_lit);
        cost += (tofill * i);
        remaining_lit -= tofill;
    }

    
    cout << cost << endl;

    return 0;
}