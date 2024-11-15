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
        lli n, a, b, c, d, p, q, y;
        cin >> n >> a >> b >> c >> d >> p >> q >> y;
        vi arr(n);
        fr(i, n) cin >> arr[i];

        lli cnt = 0;
        for (lli i = a; i < b; i++)
        {
            cnt += p;
        }

        lli cnt1 = p;
        lli rest = y - p;
        if (rest >= 0)
        {
            cnt1 += rest;
            for (lli i = c; i < d; i++)
            {
                cnt1 += q;
            }
            for (lli i = d; i < b; i++)
            {
                cnt1 += p;
            }
        }
        lli mini = min(cnt, cnt1);
        cout << mini << endl;
    }
    return 0;
}