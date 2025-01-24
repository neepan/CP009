// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
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

    lli t;
    cin >> t;

    while (t--)
    {
        lli a, b;
        cin >> a >> b;
        lli kx, ky;
        cin >> kx >> ky;
        lli qx, qy;
        cin >> qx >> qy;

        vector<pi> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pi> st1, st2;
        for (auto m : moves)
        {
            lli x = kx + m.first;
            lli y = ky + m.second;
            st1.insert(make_pair(x, y));

            x = qx + m.first;
            y = qy + m.second;
            st2.insert(make_pair(x, y));
        }
        int cnt = 0;
        for (auto s : st1)
        {
            if (st2.find(s) != st2.end())
            {
                cnt++;
            }
        }
    

    cout << cnt << endl;
}
return 0;
}