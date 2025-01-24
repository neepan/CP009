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
        lli n;
        cin >> n;
        vi a(n);
        fr(i, n) cin >> a[i];
        lli maxi1 = 0;
        lli cnt1 = 0;
        for (lli i = 0; i < n; i += 2)
        {
            maxi1 = max(maxi1, a[i]);
            cnt1++;
        }
        lli maxi2 = 0;
        lli cnt2 = 0;
        for (lli i = 1; i < n; i += 2)
        {
            maxi2 = max(maxi2, a[i]);
            cnt2++;
        }

        cout << max(maxi1 + cnt1, maxi2 + cnt2) << endl;
    }
    return 0;
}