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
using str = string;
using vs = vector<str>;
using ch = char;
using vc = vector<ch>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

long long sqrt(long long x)
{
    long long s = 0, e = 2e9, res = s;
    while (s <= e)
    {
        long long m = (s + e) / 2;
        if (m * m <= x)
            res = m, s = m + 1;
        else
            e = m - 1;
    }
    return res;
}

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

        str s;
        cin >> s;

        lli sq = sqrt(n);
        if (sq * sq != n)
        {
            cout << "NO" << endl;
        }
        else
        {
            bl isvalid = true;
            fr(i, sq)
            {
                fr(j, sq)
                {
                    bl isedge = (i == 0 || i == sq - 1 || j == 0 || j == sq - 1);
                    if (isedge ^ s[(i * sq + j)] == '1')
                    {
                        cout << "NO" << endl;
                        isvalid = false;
                        break;
                    }
                }
                if (!isvalid)
                    break;
            }
            if (isvalid)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}