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

    lli t;
    cin >> t;

    while (t--)
    {
        lli n, b, c;
        cin >> n >> b >> c;
        bl reached = false;

        if (b == 0)
        {
            if (c == n - 1 || c == n - 2)
            {
                reached = true;
                cout << n - 1 << endl;
            }
            else if (c < n - 2)
            {
                reached = true;
                cout << -1 << endl;
            }
            else
            {
                reached = true;
                cout << n << endl;
            }
        }
        if (!reached)
        {
            lli ans = n - max((n - c + b - 1) / b,0LL);
            cout << ans << endl;
        }
    }
    return 0;
}